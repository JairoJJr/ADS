var formulario = document.getElementById('infos')
var enviarDiv = document.getElementById('dados')

formulario.addEventListener('submit' , function(event){
    event.preventDefault();

    var nome = document.getElementById('nome').value;
    var end = document.getElementById('end').value;
    var cid = document.getElementById('cid').value;
    var cep = document.getElementById('cep').value;
    var desp = document.getElementById('desp').value;
    
    enviarDiv.innerText = 
    "Nome: " + nome+ "\n" +
    "Edereço: " + end + "\n" +
    "Cidade: "  + cid + "\n" +
    "CEP: " + cep + "\n" +
    "Despesas: " + "R$" + desp  + "\n"
})



