public class TestarPessoa {//classe TestarPessoa

    public static void main(String[] args) {
        //criando e instanciando os objetos pessoa1, pessoa2
        Pessoa pessoa1 = new Pessoa();
        Pessoa pessoa2 = new Pessoa();

        //ultilizando os metodos set no objeto pessoa1
        pessoa1.setNome("Gabriel"); //setando o nome
        pessoa1.setIdade(16); //setando a idade
        pessoa1.setAltura(1.70); //setando a altura

        //ultilizando os metodos get no objeto pessoa1
        System.out.println("metodos get do objeto pessoa1: \n"); //mensagem de orientação
        System.out.println(pessoa1.getNome()); //meotdo get nome para saida do nome
        //variavel idadePessoa1 recebe o retorno do metodo getIdade da pessoa1
        int idadePessoa1 = pessoa1.getIdade(); 
        System.out.println(idadePessoa1); // saida da variavel idadePessoa1
        System.out.println(pessoa1.getAltura()); //metodo get altura para retorno da altura do objeto pessoa1

        pessoa2.setNome("Emily");
        pessoa2.setIdade(13);
        pessoa2.setAltura(1.50);
        
        System.out.println("\nmetodos get do objeto pessoa2: \n");
        System.out.println(pessoa2.getNome());
        System.out.println(pessoa2.getIdade());
        System.out.println(pessoa2.getAltura());

    }//fim do metodo main
}//fim da classe TestarPessoa
