import java.util.ArrayList;
import java.util.List;

// Classe que gerencia o cadastro e listagem de funcionários
class CadastroFuncionarios {
    // Lista para armazenar os funcionários cadastrados
    List<Funcionario> funcionarios = new ArrayList<>();

    // Método para cadastrar um novo funcionário
    public void cadastrarFuncionario(String nome, String endereco, String telefone, String email, String cargo, double salario) {
        // Criar um novo objeto Funcionario
        Funcionario novoFuncionario = new Funcionario();
        
        // Atribuir os valores usando os métodos set
        novoFuncionario.setNome(nome);
        novoFuncionario.setEndereco(endereco);
        novoFuncionario.setTelefone(telefone);
        novoFuncionario.setEmail(email);
        novoFuncionario.setCargo(cargo);
        novoFuncionario.setSalario(salario);

        // Adicionar o funcionário à lista
        funcionarios.add(novoFuncionario);
    }

    // Método para exibir todos os funcionários cadastrados
    void listarFuncionarios() {
        System.out.println("Funcionários Cadastrados");
        for (Funcionario funcionario : funcionarios) {
            // Usar os métodos get para obter os valores e exibi-los
            System.out.println("Nome: " + funcionario.getNome());
            System.out.println("Endereço: " + funcionario.getEndereco());
            System.out.println("Telefone: " + funcionario.getTelefone());
            System.out.println("Email: " + funcionario.getEmail());
            System.out.println("Cargo: " + funcionario.getCargo());
            System.out.println("Salário: " + funcionario.getSalario());
            System.out.println("===============================");
        }
    }
}
