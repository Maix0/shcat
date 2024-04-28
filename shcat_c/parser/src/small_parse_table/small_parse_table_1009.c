/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1009.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5045(t_small_parse_table_array *v)
{
	v->a[100900] = actions(5826);
	v->a[100901] = 1;
	v->a[100902] = aux_sym_heredoc_redirect_token1;
	v->a[100903] = actions(5828);
	v->a[100904] = 1;
	v->a[100905] = sym_file_descriptor;
	v->a[100906] = actions(5831);
	v->a[100907] = 3;
	v->a[100908] = sym_variable_name;
	v->a[100909] = sym_test_operator;
	v->a[100910] = sym__brace_start;
	v->a[100911] = actions(5821);
	v->a[100912] = 10;
	v->a[100913] = anon_sym_SEMI;
	v->a[100914] = anon_sym_PIPE_PIPE;
	v->a[100915] = anon_sym_AMP_AMP;
	v->a[100916] = anon_sym_PIPE;
	v->a[100917] = anon_sym_AMP;
	v->a[100918] = anon_sym_LT_LT;
	v->a[100919] = anon_sym_RPAREN;
	small_parse_table_5046(v);
}

void	small_parse_table_5046(t_small_parse_table_array *v)
{
	v->a[100920] = anon_sym_SEMI_SEMI;
	v->a[100921] = anon_sym_PIPE_AMP;
	v->a[100922] = anon_sym_LT_LT_DASH;
	v->a[100923] = actions(5823);
	v->a[100924] = 11;
	v->a[100925] = anon_sym_LT;
	v->a[100926] = anon_sym_GT;
	v->a[100927] = anon_sym_GT_GT;
	v->a[100928] = anon_sym_AMP_GT;
	v->a[100929] = anon_sym_AMP_GT_GT;
	v->a[100930] = anon_sym_LT_AMP;
	v->a[100931] = anon_sym_GT_AMP;
	v->a[100932] = anon_sym_GT_PIPE;
	v->a[100933] = anon_sym_LT_AMP_DASH;
	v->a[100934] = anon_sym_GT_AMP_DASH;
	v->a[100935] = anon_sym_LT_LT_LT;
	v->a[100936] = actions(5819);
	v->a[100937] = 17;
	v->a[100938] = anon_sym_LPAREN_LPAREN;
	v->a[100939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5047(v);
}

void	small_parse_table_5047(t_small_parse_table_array *v)
{
	v->a[100940] = anon_sym_DOLLAR_LBRACK;
	v->a[100941] = anon_sym_DOLLAR;
	v->a[100942] = sym__special_character;
	v->a[100943] = anon_sym_DQUOTE;
	v->a[100944] = sym_raw_string;
	v->a[100945] = sym_ansi_c_string;
	v->a[100946] = aux_sym_number_token1;
	v->a[100947] = aux_sym_number_token2;
	v->a[100948] = anon_sym_DOLLAR_LBRACE;
	v->a[100949] = anon_sym_DOLLAR_LPAREN;
	v->a[100950] = anon_sym_BQUOTE;
	v->a[100951] = anon_sym_DOLLAR_BQUOTE;
	v->a[100952] = anon_sym_LT_LPAREN;
	v->a[100953] = anon_sym_GT_LPAREN;
	v->a[100954] = sym_word;
	v->a[100955] = 3;
	v->a[100956] = actions(3);
	v->a[100957] = 1;
	v->a[100958] = sym_comment;
	v->a[100959] = actions(5772);
	small_parse_table_5048(v);
}

void	small_parse_table_5048(t_small_parse_table_array *v)
{
	v->a[100960] = 5;
	v->a[100961] = sym_file_descriptor;
	v->a[100962] = sym_variable_name;
	v->a[100963] = sym_test_operator;
	v->a[100964] = sym__brace_start;
	v->a[100965] = aux_sym_heredoc_redirect_token1;
	v->a[100966] = actions(5770);
	v->a[100967] = 38;
	v->a[100968] = anon_sym_LPAREN_LPAREN;
	v->a[100969] = anon_sym_SEMI;
	v->a[100970] = anon_sym_PIPE_PIPE;
	v->a[100971] = anon_sym_AMP_AMP;
	v->a[100972] = anon_sym_PIPE;
	v->a[100973] = anon_sym_AMP;
	v->a[100974] = anon_sym_LT;
	v->a[100975] = anon_sym_GT;
	v->a[100976] = anon_sym_LT_LT;
	v->a[100977] = anon_sym_GT_GT;
	v->a[100978] = anon_sym_RPAREN;
	v->a[100979] = anon_sym_SEMI_SEMI;
	small_parse_table_5049(v);
}

void	small_parse_table_5049(t_small_parse_table_array *v)
{
	v->a[100980] = anon_sym_PIPE_AMP;
	v->a[100981] = anon_sym_AMP_GT;
	v->a[100982] = anon_sym_AMP_GT_GT;
	v->a[100983] = anon_sym_LT_AMP;
	v->a[100984] = anon_sym_GT_AMP;
	v->a[100985] = anon_sym_GT_PIPE;
	v->a[100986] = anon_sym_LT_AMP_DASH;
	v->a[100987] = anon_sym_GT_AMP_DASH;
	v->a[100988] = anon_sym_LT_LT_DASH;
	v->a[100989] = anon_sym_LT_LT_LT;
	v->a[100990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100991] = anon_sym_DOLLAR_LBRACK;
	v->a[100992] = anon_sym_DOLLAR;
	v->a[100993] = sym__special_character;
	v->a[100994] = anon_sym_DQUOTE;
	v->a[100995] = sym_raw_string;
	v->a[100996] = sym_ansi_c_string;
	v->a[100997] = aux_sym_number_token1;
	v->a[100998] = aux_sym_number_token2;
	v->a[100999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5050(v);
}

/* EOF small_parse_table_1009.c */
