/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_109.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_545(t_small_parse_table_array *v)
{
	v->a[10900] = anon_sym_GT_GT;
	v->a[10901] = anon_sym_SEMI_SEMI;
	v->a[10902] = anon_sym_SEMI_AMP;
	v->a[10903] = anon_sym_SEMI_SEMI_AMP;
	v->a[10904] = anon_sym_PIPE_AMP;
	v->a[10905] = anon_sym_AMP_GT;
	v->a[10906] = anon_sym_AMP_GT_GT;
	v->a[10907] = anon_sym_LT_AMP;
	v->a[10908] = anon_sym_GT_AMP;
	v->a[10909] = anon_sym_GT_PIPE;
	v->a[10910] = anon_sym_LT_AMP_DASH;
	v->a[10911] = anon_sym_GT_AMP_DASH;
	v->a[10912] = anon_sym_LT_LT_DASH;
	v->a[10913] = aux_sym_heredoc_redirect_token1;
	v->a[10914] = anon_sym_LT_LT_LT;
	v->a[10915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10916] = anon_sym_DOLLAR_LBRACK;
	v->a[10917] = sym__special_character;
	v->a[10918] = sym_raw_string;
	v->a[10919] = sym_ansi_c_string;
	small_parse_table_546(v);
}

void	small_parse_table_546(t_small_parse_table_array *v)
{
	v->a[10920] = aux_sym_number_token1;
	v->a[10921] = aux_sym_number_token2;
	v->a[10922] = anon_sym_DOLLAR_LBRACE;
	v->a[10923] = anon_sym_DOLLAR_LPAREN;
	v->a[10924] = anon_sym_BQUOTE;
	v->a[10925] = anon_sym_DOLLAR_BQUOTE;
	v->a[10926] = anon_sym_LT_LPAREN;
	v->a[10927] = anon_sym_GT_LPAREN;
	v->a[10928] = sym_word;
	v->a[10929] = 8;
	v->a[10930] = actions(3);
	v->a[10931] = 1;
	v->a[10932] = sym_comment;
	v->a[10933] = actions(2578);
	v->a[10934] = 1;
	v->a[10935] = anon_sym_DQUOTE;
	v->a[10936] = actions(2953);
	v->a[10937] = 1;
	v->a[10938] = sym_variable_name;
	v->a[10939] = state(1585);
	small_parse_table_547(v);
}

void	small_parse_table_547(t_small_parse_table_array *v)
{
	v->a[10940] = 1;
	v->a[10941] = sym_string;
	v->a[10942] = actions(2951);
	v->a[10943] = 2;
	v->a[10944] = aux_sym__simple_variable_name_token1;
	v->a[10945] = aux_sym__multiline_variable_name_token1;
	v->a[10946] = actions(1241);
	v->a[10947] = 3;
	v->a[10948] = sym_file_descriptor;
	v->a[10949] = sym_test_operator;
	v->a[10950] = sym__brace_start;
	v->a[10951] = actions(2949);
	v->a[10952] = 9;
	v->a[10953] = anon_sym_DASH;
	v->a[10954] = anon_sym_STAR;
	v->a[10955] = anon_sym_BANG;
	v->a[10956] = anon_sym_QMARK;
	v->a[10957] = anon_sym_DOLLAR;
	v->a[10958] = anon_sym_POUND;
	v->a[10959] = anon_sym_AT2;
	small_parse_table_548(v);
}

void	small_parse_table_548(t_small_parse_table_array *v)
{
	v->a[10960] = anon_sym_0;
	v->a[10961] = anon_sym__;
	v->a[10962] = actions(1239);
	v->a[10963] = 38;
	v->a[10964] = anon_sym_LPAREN_LPAREN;
	v->a[10965] = anon_sym_SEMI;
	v->a[10966] = anon_sym_PIPE_PIPE;
	v->a[10967] = anon_sym_AMP_AMP;
	v->a[10968] = anon_sym_PIPE;
	v->a[10969] = anon_sym_AMP;
	v->a[10970] = anon_sym_LT;
	v->a[10971] = anon_sym_GT;
	v->a[10972] = anon_sym_LT_LT;
	v->a[10973] = anon_sym_GT_GT;
	v->a[10974] = anon_sym_SEMI_SEMI;
	v->a[10975] = anon_sym_SEMI_AMP;
	v->a[10976] = anon_sym_SEMI_SEMI_AMP;
	v->a[10977] = anon_sym_PIPE_AMP;
	v->a[10978] = anon_sym_AMP_GT;
	v->a[10979] = anon_sym_AMP_GT_GT;
	small_parse_table_549(v);
}

void	small_parse_table_549(t_small_parse_table_array *v)
{
	v->a[10980] = anon_sym_LT_AMP;
	v->a[10981] = anon_sym_GT_AMP;
	v->a[10982] = anon_sym_GT_PIPE;
	v->a[10983] = anon_sym_LT_AMP_DASH;
	v->a[10984] = anon_sym_GT_AMP_DASH;
	v->a[10985] = anon_sym_LT_LT_DASH;
	v->a[10986] = aux_sym_heredoc_redirect_token1;
	v->a[10987] = anon_sym_LT_LT_LT;
	v->a[10988] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10989] = anon_sym_DOLLAR_LBRACK;
	v->a[10990] = sym__special_character;
	v->a[10991] = sym_raw_string;
	v->a[10992] = sym_ansi_c_string;
	v->a[10993] = aux_sym_number_token1;
	v->a[10994] = aux_sym_number_token2;
	v->a[10995] = anon_sym_DOLLAR_LBRACE;
	v->a[10996] = anon_sym_DOLLAR_LPAREN;
	v->a[10997] = anon_sym_BQUOTE;
	v->a[10998] = anon_sym_DOLLAR_BQUOTE;
	v->a[10999] = anon_sym_LT_LPAREN;
	small_parse_table_550(v);
}

/* EOF small_parse_table_109.c */
