/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_869.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4345(t_small_parse_table_array *v)
{
	v->a[86900] = anon_sym_DOLLAR;
	v->a[86901] = actions(4596);
	v->a[86902] = 1;
	v->a[86903] = anon_sym_DQUOTE;
	v->a[86904] = actions(4598);
	v->a[86905] = 1;
	v->a[86906] = aux_sym_number_token1;
	v->a[86907] = actions(4600);
	v->a[86908] = 1;
	v->a[86909] = aux_sym_number_token2;
	v->a[86910] = actions(4602);
	v->a[86911] = 1;
	v->a[86912] = anon_sym_DOLLAR_LBRACE;
	v->a[86913] = actions(4604);
	v->a[86914] = 1;
	v->a[86915] = anon_sym_DOLLAR_LPAREN;
	v->a[86916] = actions(4606);
	v->a[86917] = 1;
	v->a[86918] = anon_sym_BQUOTE;
	v->a[86919] = actions(4608);
	small_parse_table_4346(v);
}

void	small_parse_table_4346(t_small_parse_table_array *v)
{
	v->a[86920] = 1;
	v->a[86921] = anon_sym_DOLLAR_BQUOTE;
	v->a[86922] = actions(4829);
	v->a[86923] = 1;
	v->a[86924] = aux_sym__simple_variable_name_token1;
	v->a[86925] = actions(4831);
	v->a[86926] = 1;
	v->a[86927] = sym_variable_name;
	v->a[86928] = state(1476);
	v->a[86929] = 1;
	v->a[86930] = sym__arithmetic_postfix_expression;
	v->a[86931] = state(1478);
	v->a[86932] = 1;
	v->a[86933] = sym__arithmetic_unary_expression;
	v->a[86934] = state(1490);
	v->a[86935] = 1;
	v->a[86936] = sym__arithmetic_ternary_expression;
	v->a[86937] = state(1511);
	v->a[86938] = 1;
	v->a[86939] = sym__arithmetic_binary_expression;
	small_parse_table_4347(v);
}

void	small_parse_table_4347(t_small_parse_table_array *v)
{
	v->a[86940] = actions(4588);
	v->a[86941] = 2;
	v->a[86942] = anon_sym_PLUS_PLUS;
	v->a[86943] = anon_sym_DASH_DASH;
	v->a[86944] = actions(4590);
	v->a[86945] = 2;
	v->a[86946] = anon_sym_DASH2;
	v->a[86947] = anon_sym_PLUS2;
	v->a[86948] = state(1508);
	v->a[86949] = 8;
	v->a[86950] = sym__arithmetic_expression;
	v->a[86951] = sym__arithmetic_literal;
	v->a[86952] = sym__arithmetic_parenthesized_expression;
	v->a[86953] = sym_string;
	v->a[86954] = sym_number;
	v->a[86955] = sym_simple_expansion;
	v->a[86956] = sym_expansion;
	v->a[86957] = sym_command_substitution;
	v->a[86958] = 21;
	v->a[86959] = actions(57);
	small_parse_table_4348(v);
}

void	small_parse_table_4348(t_small_parse_table_array *v)
{
	v->a[86960] = 1;
	v->a[86961] = sym_comment;
	v->a[86962] = actions(4584);
	v->a[86963] = 1;
	v->a[86964] = anon_sym_LPAREN;
	v->a[86965] = actions(4586);
	v->a[86966] = 1;
	v->a[86967] = anon_sym_BANG;
	v->a[86968] = actions(4592);
	v->a[86969] = 1;
	v->a[86970] = anon_sym_TILDE;
	v->a[86971] = actions(4594);
	v->a[86972] = 1;
	v->a[86973] = anon_sym_DOLLAR;
	v->a[86974] = actions(4596);
	v->a[86975] = 1;
	v->a[86976] = anon_sym_DQUOTE;
	v->a[86977] = actions(4598);
	v->a[86978] = 1;
	v->a[86979] = aux_sym_number_token1;
	small_parse_table_4349(v);
}

void	small_parse_table_4349(t_small_parse_table_array *v)
{
	v->a[86980] = actions(4600);
	v->a[86981] = 1;
	v->a[86982] = aux_sym_number_token2;
	v->a[86983] = actions(4602);
	v->a[86984] = 1;
	v->a[86985] = anon_sym_DOLLAR_LBRACE;
	v->a[86986] = actions(4604);
	v->a[86987] = 1;
	v->a[86988] = anon_sym_DOLLAR_LPAREN;
	v->a[86989] = actions(4606);
	v->a[86990] = 1;
	v->a[86991] = anon_sym_BQUOTE;
	v->a[86992] = actions(4608);
	v->a[86993] = 1;
	v->a[86994] = anon_sym_DOLLAR_BQUOTE;
	v->a[86995] = actions(4833);
	v->a[86996] = 1;
	v->a[86997] = aux_sym__simple_variable_name_token1;
	v->a[86998] = actions(4835);
	v->a[86999] = 1;
	small_parse_table_4350(v);
}

/* EOF small_parse_table_869.c */
