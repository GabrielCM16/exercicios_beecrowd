public class Pessoa{
    //atributos privados nome, idade e altura
  private String nome;
  private int idade;
  private double altura;

    //metodo get para retorno String do nome do objeto
  public String getNome(){
    return nome;
  }
  //metodo get para retorno int da idade objeto
  public int getIdade() {
    return idade;
  }
  //metodo get para retorno double da altura do objeto
  public double getAltura() {
    return altura;
  }
  //metodo set para setar o nome do tipo String
  public void setNome(String nome) {
    this.nome = nome;
  }
  //metodo set para setar a idade do tipo int
  public void setIdade(int idade) {
    this.idade = idade;
  }
  //metodo set para setar a altura do tipo double
  public void setAltura(double altura) {
    this.altura = altura;
  }
}