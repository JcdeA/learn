using Microsoft.ClearScript.V8;

var engine = new V8ScriptEngine();
engine.AddHostType("console", typeof(Console));

engine.AddHostObject("uri", new Uri("http://www.example.com"));
engine.Execute(@"
console.Write('asdf\n')
console.Write(uri.ToString())");

