/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2339.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11695(t_small_parse_table_array *v)
{
	v->a[233900] = sym_string;
	v->a[233901] = sym_translated_string;
	v->a[233902] = sym_number;
	v->a[233903] = sym_simple_expansion;
	v->a[233904] = sym_expansion;
	v->a[233905] = sym_command_substitution;
	v->a[233906] = sym_process_substitution;
	v->a[233907] = 18;
	v->a[233908] = actions(3);
	v->a[233909] = 1;
	v->a[233910] = sym_comment;
	v->a[233911] = actions(5616);
	v->a[233912] = 1;
	v->a[233913] = aux_sym_number_token1;
	v->a[233914] = actions(5618);
	v->a[233915] = 1;
	v->a[233916] = aux_sym_number_token2;
	v->a[233917] = actions(5622);
	v->a[233918] = 1;
	v->a[233919] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11696(v);
}

void	small_parse_table_11696(t_small_parse_table_array *v)
{
	v->a[233920] = actions(5632);
	v->a[233921] = 1;
	v->a[233922] = sym__brace_start;
	v->a[233923] = actions(8944);
	v->a[233924] = 1;
	v->a[233925] = anon_sym_DOLLAR_LBRACK;
	v->a[233926] = actions(8948);
	v->a[233927] = 1;
	v->a[233928] = anon_sym_DQUOTE;
	v->a[233929] = actions(8952);
	v->a[233930] = 1;
	v->a[233931] = anon_sym_DOLLAR_LBRACE;
	v->a[233932] = actions(8954);
	v->a[233933] = 1;
	v->a[233934] = anon_sym_BQUOTE;
	v->a[233935] = actions(8956);
	v->a[233936] = 1;
	v->a[233937] = anon_sym_DOLLAR_BQUOTE;
	v->a[233938] = actions(10290);
	v->a[233939] = 1;
	small_parse_table_11697(v);
}

void	small_parse_table_11697(t_small_parse_table_array *v)
{
	v->a[233940] = sym_word;
	v->a[233941] = actions(10296);
	v->a[233942] = 1;
	v->a[233943] = sym__comment_word;
	v->a[233944] = actions(11048);
	v->a[233945] = 1;
	v->a[233946] = anon_sym_DOLLAR;
	v->a[233947] = actions(8942);
	v->a[233948] = 2;
	v->a[233949] = anon_sym_LPAREN_LPAREN;
	v->a[233950] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[233951] = actions(8958);
	v->a[233952] = 2;
	v->a[233953] = anon_sym_LT_LPAREN;
	v->a[233954] = anon_sym_GT_LPAREN;
	v->a[233955] = actions(10292);
	v->a[233956] = 2;
	v->a[233957] = sym_test_operator;
	v->a[233958] = sym__special_character;
	v->a[233959] = actions(10294);
	small_parse_table_11698(v);
}

void	small_parse_table_11698(t_small_parse_table_array *v)
{
	v->a[233960] = 3;
	v->a[233961] = sym__bare_dollar;
	v->a[233962] = sym_raw_string;
	v->a[233963] = sym_ansi_c_string;
	v->a[233964] = state(3415);
	v->a[233965] = 9;
	v->a[233966] = sym_arithmetic_expansion;
	v->a[233967] = sym_brace_expression;
	v->a[233968] = sym_string;
	v->a[233969] = sym_translated_string;
	v->a[233970] = sym_number;
	v->a[233971] = sym_simple_expansion;
	v->a[233972] = sym_expansion;
	v->a[233973] = sym_command_substitution;
	v->a[233974] = sym_process_substitution;
	v->a[233975] = 18;
	v->a[233976] = actions(3);
	v->a[233977] = 1;
	v->a[233978] = sym_comment;
	v->a[233979] = actions(2636);
	small_parse_table_11699(v);
}

void	small_parse_table_11699(t_small_parse_table_array *v)
{
	v->a[233980] = 1;
	v->a[233981] = anon_sym_DOLLAR_LBRACK;
	v->a[233982] = actions(2642);
	v->a[233983] = 1;
	v->a[233984] = anon_sym_DQUOTE;
	v->a[233985] = actions(2646);
	v->a[233986] = 1;
	v->a[233987] = aux_sym_number_token1;
	v->a[233988] = actions(2648);
	v->a[233989] = 1;
	v->a[233990] = aux_sym_number_token2;
	v->a[233991] = actions(2650);
	v->a[233992] = 1;
	v->a[233993] = anon_sym_DOLLAR_LBRACE;
	v->a[233994] = actions(2652);
	v->a[233995] = 1;
	v->a[233996] = anon_sym_DOLLAR_LPAREN;
	v->a[233997] = actions(2654);
	v->a[233998] = 1;
	v->a[233999] = anon_sym_BQUOTE;
	small_parse_table_11700(v);
}

/* EOF small_parse_table_2339.c */
