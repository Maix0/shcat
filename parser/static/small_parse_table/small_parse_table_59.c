/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_59.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_295(t_small_parse_table_array *v)
{
	v->a[5900] = actions(11);
	v->a[5901] = 2;
	v->a[5902] = anon_sym_while;
	v->a[5903] = anon_sym_until;
	v->a[5904] = actions(59);
	v->a[5905] = 2;
	v->a[5906] = sym_raw_string;
	v->a[5907] = sym_number;
	v->a[5908] = state(425);
	v->a[5909] = 5;
	v->a[5910] = sym_arithmetic_expansion;
	v->a[5911] = sym_string;
	v->a[5912] = sym_simple_expansion;
	v->a[5913] = sym_expansion;
	v->a[5914] = sym_command_substitution;
	v->a[5915] = actions(51);
	v->a[5916] = 7;
	v->a[5917] = anon_sym_LT;
	v->a[5918] = anon_sym_GT;
	v->a[5919] = anon_sym_GT_GT;
	small_parse_table_296(v);
}

void	small_parse_table_296(t_small_parse_table_array *v)
{
	v->a[5920] = anon_sym_LT_AMP;
	v->a[5921] = anon_sym_GT_AMP;
	v->a[5922] = anon_sym_GT_PIPE;
	v->a[5923] = anon_sym_LT_GT;
	v->a[5924] = state(849);
	v->a[5925] = 12;
	v->a[5926] = sym_redirected_statement;
	v->a[5927] = sym_for_statement;
	v->a[5928] = sym_while_statement;
	v->a[5929] = sym_if_statement;
	v->a[5930] = sym_case_statement;
	v->a[5931] = sym_function_definition;
	v->a[5932] = sym_compound_statement;
	v->a[5933] = sym_subshell;
	v->a[5934] = sym_list;
	v->a[5935] = sym_negated_command;
	v->a[5936] = sym_command;
	v->a[5937] = sym__variable_assignments;
	v->a[5938] = 30;
	v->a[5939] = actions(3);
	small_parse_table_297(v);
}

void	small_parse_table_297(t_small_parse_table_array *v)
{
	v->a[5940] = 1;
	v->a[5941] = sym_comment;
	v->a[5942] = actions(9);
	v->a[5943] = 1;
	v->a[5944] = anon_sym_for;
	v->a[5945] = actions(13);
	v->a[5946] = 1;
	v->a[5947] = anon_sym_if;
	v->a[5948] = actions(15);
	v->a[5949] = 1;
	v->a[5950] = anon_sym_case;
	v->a[5951] = actions(17);
	v->a[5952] = 1;
	v->a[5953] = anon_sym_LPAREN;
	v->a[5954] = actions(19);
	v->a[5955] = 1;
	v->a[5956] = anon_sym_LBRACE;
	v->a[5957] = actions(53);
	v->a[5958] = 1;
	v->a[5959] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_298(v);
}

void	small_parse_table_298(t_small_parse_table_array *v)
{
	v->a[5960] = actions(55);
	v->a[5961] = 1;
	v->a[5962] = anon_sym_DOLLAR;
	v->a[5963] = actions(57);
	v->a[5964] = 1;
	v->a[5965] = anon_sym_DQUOTE;
	v->a[5966] = actions(61);
	v->a[5967] = 1;
	v->a[5968] = anon_sym_DOLLAR_LBRACE;
	v->a[5969] = actions(63);
	v->a[5970] = 1;
	v->a[5971] = anon_sym_DOLLAR_LPAREN;
	v->a[5972] = actions(65);
	v->a[5973] = 1;
	v->a[5974] = anon_sym_BQUOTE;
	v->a[5975] = actions(206);
	v->a[5976] = 1;
	v->a[5977] = sym_word;
	v->a[5978] = actions(208);
	v->a[5979] = 1;
	small_parse_table_299(v);
}

void	small_parse_table_299(t_small_parse_table_array *v)
{
	v->a[5980] = anon_sym_BANG;
	v->a[5981] = actions(214);
	v->a[5982] = 1;
	v->a[5983] = sym_variable_name;
	v->a[5984] = state(106);
	v->a[5985] = 1;
	v->a[5986] = aux_sym__statements_repeat1;
	v->a[5987] = state(227);
	v->a[5988] = 1;
	v->a[5989] = sym_command_name;
	v->a[5990] = state(277);
	v->a[5991] = 1;
	v->a[5992] = sym_variable_assignment;
	v->a[5993] = state(506);
	v->a[5994] = 1;
	v->a[5995] = aux_sym_command_repeat1;
	v->a[5996] = state(600);
	v->a[5997] = 1;
	v->a[5998] = sym_file_redirect;
	v->a[5999] = state(602);
	small_parse_table_300(v);
}

/* EOF small_parse_table_59.c */
