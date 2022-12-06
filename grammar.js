module.exports = grammar({
  name: 'runscript',
  
  extras: $ => [
    $.comment,
    /[\r\t\f\v ]/,
  ],
  
  rules: {
    runscript: $ => seq(
      repeat(choice($.option, '\n')),
      repeat($.script)
    ),
    
    script: $ => seq(
      $.header,
      '\n',
      repeat($.option),
      $.body,
    ),
    
    header: $ => seq(
      '[',
      $.target,
      optional(seq(
        ':',
        optional($.phase)
      )),
      ']',
      optional($.executor)
    ),
    
    option: $ => seq(
      '::',
      $.option_name,
      optional($.option_params),
      '\n',
    ),
    
    body: $ => repeat1(/([^\[\n\r\t\f\v ][^\n]*)?\n/),
    
    comment: $ => /#.*/,
    
    target: $ => /[A-Za-z_-]+/,
    phase: $ => /[A-Za-z_-]+/,
    option_name: $ => /[A-Za-z_-]+/,
    option_params: $ => /[^\n]+/,
    executor: $ => /[^\n]+/
  }
})
