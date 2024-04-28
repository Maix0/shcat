/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_479.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2395(t_small_parse_table_array *v)
{
	v->a[47900] = sym_raw_string;
	v->a[47901] = sym_ansi_c_string;
	v->a[47902] = aux_sym_number_token1;
	v->a[47903] = aux_sym_number_token2;
	v->a[47904] = anon_sym_DOLLAR_LBRACE;
	v->a[47905] = anon_sym_DOLLAR_LPAREN;
	v->a[47906] = anon_sym_BQUOTE;
	v->a[47907] = anon_sym_DOLLAR_BQUOTE;
	v->a[47908] = anon_sym_LT_LPAREN;
	v->a[47909] = anon_sym_GT_LPAREN;
	v->a[47910] = sym_word;
	v->a[47911] = 6;
	v->a[47912] = actions(3);
	v->a[47913] = 1;
	v->a[47914] = sym_comment;
	v->a[47915] = actions(5144);
	v->a[47916] = 1;
	v->a[47917] = aux_sym_concatenation_token1;
	v->a[47918] = actions(5351);
	v->a[47919] = 1;
	small_parse_table_2396(v);
}

void	small_parse_table_2396(t_small_parse_table_array *v)
{
	v->a[47920] = sym__concat;
	v->a[47921] = state(1140);
	v->a[47922] = 1;
	v->a[47923] = aux_sym_concatenation_repeat1;
	v->a[47924] = actions(1288);
	v->a[47925] = 6;
	v->a[47926] = sym_file_descriptor;
	v->a[47927] = sym_test_operator;
	v->a[47928] = sym__bare_dollar;
	v->a[47929] = sym__brace_start;
	v->a[47930] = ts_builtin_sym_end;
	v->a[47931] = aux_sym_heredoc_redirect_token1;
	v->a[47932] = actions(1286);
	v->a[47933] = 39;
	v->a[47934] = anon_sym_LPAREN_LPAREN;
	v->a[47935] = anon_sym_SEMI;
	v->a[47936] = anon_sym_PIPE_PIPE;
	v->a[47937] = anon_sym_AMP_AMP;
	v->a[47938] = anon_sym_PIPE;
	v->a[47939] = anon_sym_AMP;
	small_parse_table_2397(v);
}

void	small_parse_table_2397(t_small_parse_table_array *v)
{
	v->a[47940] = anon_sym_EQ_EQ;
	v->a[47941] = anon_sym_LT;
	v->a[47942] = anon_sym_GT;
	v->a[47943] = anon_sym_LT_LT;
	v->a[47944] = anon_sym_GT_GT;
	v->a[47945] = anon_sym_SEMI_SEMI;
	v->a[47946] = anon_sym_PIPE_AMP;
	v->a[47947] = anon_sym_EQ_TILDE;
	v->a[47948] = anon_sym_AMP_GT;
	v->a[47949] = anon_sym_AMP_GT_GT;
	v->a[47950] = anon_sym_LT_AMP;
	v->a[47951] = anon_sym_GT_AMP;
	v->a[47952] = anon_sym_GT_PIPE;
	v->a[47953] = anon_sym_LT_AMP_DASH;
	v->a[47954] = anon_sym_GT_AMP_DASH;
	v->a[47955] = anon_sym_LT_LT_DASH;
	v->a[47956] = anon_sym_LT_LT_LT;
	v->a[47957] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47958] = anon_sym_DOLLAR_LBRACK;
	v->a[47959] = anon_sym_DOLLAR;
	small_parse_table_2398(v);
}

void	small_parse_table_2398(t_small_parse_table_array *v)
{
	v->a[47960] = sym__special_character;
	v->a[47961] = anon_sym_DQUOTE;
	v->a[47962] = sym_raw_string;
	v->a[47963] = sym_ansi_c_string;
	v->a[47964] = aux_sym_number_token1;
	v->a[47965] = aux_sym_number_token2;
	v->a[47966] = anon_sym_DOLLAR_LBRACE;
	v->a[47967] = anon_sym_DOLLAR_LPAREN;
	v->a[47968] = anon_sym_BQUOTE;
	v->a[47969] = anon_sym_DOLLAR_BQUOTE;
	v->a[47970] = anon_sym_LT_LPAREN;
	v->a[47971] = anon_sym_GT_LPAREN;
	v->a[47972] = sym_word;
	v->a[47973] = 13;
	v->a[47974] = actions(3);
	v->a[47975] = 1;
	v->a[47976] = sym_comment;
	v->a[47977] = actions(2719);
	v->a[47978] = 1;
	v->a[47979] = anon_sym_BQUOTE;
	small_parse_table_2399(v);
}

void	small_parse_table_2399(t_small_parse_table_array *v)
{
	v->a[47980] = actions(5094);
	v->a[47981] = 1;
	v->a[47982] = sym_variable_name;
	v->a[47983] = actions(5357);
	v->a[47984] = 1;
	v->a[47985] = aux_sym_heredoc_redirect_token1;
	v->a[47986] = state(6758);
	v->a[47987] = 1;
	v->a[47988] = sym_subscript;
	v->a[47989] = actions(4253);
	v->a[47990] = 2;
	v->a[47991] = anon_sym_PIPE;
	v->a[47992] = anon_sym_PIPE_AMP;
	v->a[47993] = actions(4692);
	v->a[47994] = 2;
	v->a[47995] = anon_sym_LT_LT;
	v->a[47996] = anon_sym_LT_LT_DASH;
	v->a[47997] = actions(5355);
	v->a[47998] = 2;
	v->a[47999] = anon_sym_PIPE_PIPE;
	small_parse_table_2400(v);
}

/* EOF small_parse_table_479.c */
