var url = "https://example.com";
var query = 'text="hello"&page=3';
var parameter = 'black&white';
console.log(encodeURI(url + '?' + query));                     // https://example.com?text=%22hello%22&page=3  ≡
console.log(url + '?style=' + encodeURIComponent(parameter));  // https://example.com?style=black%26white      ≡

// Comparison of encoding methods:  ≡
/* ❯❯❯ GENERATOR:TABLE:JAVASCRIPT:Compare()
function Compare()
{
    var table = [['character', 'encodeURI', 'encodeURIComponent', 'escape (deprecated)']];
    var characters = ['*', '.', '_', '-', '~', "'", '!', '(', ')', '/', '+', '@', '?', '=', ':', '#', ';', ',', '$', '&', ' ', '%', '^', '[', ']', '{', '}', '<', '>', '"', '\\', '|', '`'];
    for (var character of characters)
        table.push([character, encodeURI(character), encodeURIComponent(character), escape(character)]);
    return table;
}
GENERATOR ❮❮❮ */