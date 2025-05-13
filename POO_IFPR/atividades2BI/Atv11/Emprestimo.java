public class Emprestimo { //começo da classe emprestimo
    //criando os atributos publicos valortotal, taxaJuros e numeros parcelas
    public double valorTotal;
    public double taxaJuros;
    public int numeroParcelas;
    //variavel que auxilia o numero de parcelas para verificar se existem parcelas disponiveis
    int auxNumParcelas = 0; 

    public double proximaParcela(){ //começo do metodo proximaParcela
        if ((this.numeroParcelas - this.auxNumParcelas) > 0){ // se ainda existirem parcelas
            final double juros = valorTotal * taxaJuros; //calculo dos juros de cada parcela
            double valor = (valorTotal / (double) numeroParcelas) + juros; //calcula o valor da parcela somando os juros
            auxNumParcelas++; //variavel aux do numero de parcelas recebe mais 1
            return valor; //retorna o valor da parcela ja com os juros
        } else { //caso não tenha parcelas ainda
            return -1.0; //retorna -1 pois nao existem parcelas
        } //fim das comparações e do else
    } //fim do metodo proximaParcela

} //fim da classe emprestimo
