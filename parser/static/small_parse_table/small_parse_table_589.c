/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_589.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2945(t_small_parse_table_array *v)
{
	v->a[58900] = sym_string;
	v->a[58901] = sym_translated_string;
	v->a[58902] = sym_number;
	v->a[58903] = sym_simple_expansion;
	v->a[58904] = sym_expansion;
	v->a[58905] = sym_command_substitution;
	v->a[58906] = sym_process_substitution;
	v->a[58907] = actions(2072);
	v->a[58908] = 13;
	v->a[58909] = anon_sym_PIPE_PIPE;
	v->a[58910] = anon_sym_AMP_AMP;
	v->a[58911] = anon_sym_LT;
	v->a[58912] = anon_sym_GT;
	v->a[58913] = anon_sym_GT_GT;
	v->a[58914] = anon_sym_AMP_GT;
	v->a[58915] = anon_sym_AMP_GT_GT;
	v->a[58916] = anon_sym_LT_AMP;
	v->a[58917] = anon_sym_GT_AMP;
	v->a[58918] = anon_sym_GT_PIPE;
	v->a[58919] = anon_sym_LT_AMP_DASH;
	small_parse_table_2946(v);
}

void	small_parse_table_2946(t_small_parse_table_array *v)
{
	v->a[58920] = anon_sym_GT_AMP_DASH;
	v->a[58921] = anon_sym_LT_LT_LT;
	v->a[58922] = 6;
	v->a[58923] = actions(3);
	v->a[58924] = 1;
	v->a[58925] = sym_comment;
	v->a[58926] = actions(5634);
	v->a[58927] = 1;
	v->a[58928] = aux_sym_concatenation_token1;
	v->a[58929] = actions(5636);
	v->a[58930] = 1;
	v->a[58931] = sym__concat;
	v->a[58932] = state(1398);
	v->a[58933] = 1;
	v->a[58934] = aux_sym_concatenation_repeat1;
	v->a[58935] = actions(5180);
	v->a[58936] = 6;
	v->a[58937] = sym_file_descriptor;
	v->a[58938] = sym_variable_name;
	v->a[58939] = sym_test_operator;
	small_parse_table_2947(v);
}

void	small_parse_table_2947(t_small_parse_table_array *v)
{
	v->a[58940] = sym__brace_start;
	v->a[58941] = ts_builtin_sym_end;
	v->a[58942] = aux_sym_heredoc_redirect_token1;
	v->a[58943] = actions(5178);
	v->a[58944] = 37;
	v->a[58945] = anon_sym_LPAREN_LPAREN;
	v->a[58946] = anon_sym_SEMI;
	v->a[58947] = anon_sym_PIPE_PIPE;
	v->a[58948] = anon_sym_AMP_AMP;
	v->a[58949] = anon_sym_PIPE;
	v->a[58950] = anon_sym_AMP;
	v->a[58951] = anon_sym_LT;
	v->a[58952] = anon_sym_GT;
	v->a[58953] = anon_sym_LT_LT;
	v->a[58954] = anon_sym_GT_GT;
	v->a[58955] = anon_sym_SEMI_SEMI;
	v->a[58956] = anon_sym_PIPE_AMP;
	v->a[58957] = anon_sym_AMP_GT;
	v->a[58958] = anon_sym_AMP_GT_GT;
	v->a[58959] = anon_sym_LT_AMP;
	small_parse_table_2948(v);
}

void	small_parse_table_2948(t_small_parse_table_array *v)
{
	v->a[58960] = anon_sym_GT_AMP;
	v->a[58961] = anon_sym_GT_PIPE;
	v->a[58962] = anon_sym_LT_AMP_DASH;
	v->a[58963] = anon_sym_GT_AMP_DASH;
	v->a[58964] = anon_sym_LT_LT_DASH;
	v->a[58965] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58966] = anon_sym_DOLLAR_LBRACK;
	v->a[58967] = anon_sym_DOLLAR;
	v->a[58968] = sym__special_character;
	v->a[58969] = anon_sym_DQUOTE;
	v->a[58970] = sym_raw_string;
	v->a[58971] = sym_ansi_c_string;
	v->a[58972] = aux_sym_number_token1;
	v->a[58973] = aux_sym_number_token2;
	v->a[58974] = anon_sym_DOLLAR_LBRACE;
	v->a[58975] = anon_sym_DOLLAR_LPAREN;
	v->a[58976] = anon_sym_BQUOTE;
	v->a[58977] = anon_sym_DOLLAR_BQUOTE;
	v->a[58978] = anon_sym_LT_LPAREN;
	v->a[58979] = anon_sym_GT_LPAREN;
	small_parse_table_2949(v);
}

void	small_parse_table_2949(t_small_parse_table_array *v)
{
	v->a[58980] = aux_sym__simple_variable_name_token1;
	v->a[58981] = sym_word;
	v->a[58982] = 3;
	v->a[58983] = actions(3);
	v->a[58984] = 1;
	v->a[58985] = sym_comment;
	v->a[58986] = actions(1322);
	v->a[58987] = 6;
	v->a[58988] = sym_file_descriptor;
	v->a[58989] = sym__concat;
	v->a[58990] = sym_variable_name;
	v->a[58991] = sym_test_operator;
	v->a[58992] = sym__brace_start;
	v->a[58993] = aux_sym_heredoc_redirect_token1;
	v->a[58994] = actions(1320);
	v->a[58995] = 40;
	v->a[58996] = anon_sym_LPAREN_LPAREN;
	v->a[58997] = anon_sym_SEMI;
	v->a[58998] = anon_sym_PIPE_PIPE;
	v->a[58999] = anon_sym_AMP_AMP;
	small_parse_table_2950(v);
}

/* EOF small_parse_table_589.c */
