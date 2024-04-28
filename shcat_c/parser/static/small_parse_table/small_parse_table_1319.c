/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1319.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6595(t_small_parse_table_array *v)
{
	v->a[131900] = anon_sym_PIPE_EQ;
	v->a[131901] = anon_sym_PIPE_PIPE;
	v->a[131902] = anon_sym_AMP_AMP;
	v->a[131903] = anon_sym_EQ_EQ;
	v->a[131904] = anon_sym_BANG_EQ;
	v->a[131905] = anon_sym_LT_EQ;
	v->a[131906] = anon_sym_GT_EQ;
	v->a[131907] = anon_sym_RPAREN;
	v->a[131908] = anon_sym_EQ_TILDE;
	v->a[131909] = anon_sym_QMARK;
	v->a[131910] = 3;
	v->a[131911] = actions(71);
	v->a[131912] = 1;
	v->a[131913] = sym_comment;
	v->a[131914] = actions(1328);
	v->a[131915] = 13;
	v->a[131916] = anon_sym_PIPE;
	v->a[131917] = anon_sym_LT;
	v->a[131918] = anon_sym_GT;
	v->a[131919] = anon_sym_LT_LT;
	small_parse_table_6596(v);
}

void	small_parse_table_6596(t_small_parse_table_array *v)
{
	v->a[131920] = anon_sym_AMP_GT;
	v->a[131921] = anon_sym_LT_AMP;
	v->a[131922] = anon_sym_GT_AMP;
	v->a[131923] = anon_sym_DOLLAR;
	v->a[131924] = aux_sym_number_token1;
	v->a[131925] = aux_sym_number_token2;
	v->a[131926] = anon_sym_DOLLAR_LPAREN;
	v->a[131927] = anon_sym_BQUOTE;
	v->a[131928] = sym_word;
	v->a[131929] = actions(1330);
	v->a[131930] = 27;
	v->a[131931] = sym_file_descriptor;
	v->a[131932] = sym__concat;
	v->a[131933] = sym_variable_name;
	v->a[131934] = sym_test_operator;
	v->a[131935] = sym__brace_start;
	v->a[131936] = anon_sym_LPAREN_LPAREN;
	v->a[131937] = anon_sym_PIPE_PIPE;
	v->a[131938] = anon_sym_AMP_AMP;
	v->a[131939] = anon_sym_GT_GT;
	small_parse_table_6597(v);
}

void	small_parse_table_6597(t_small_parse_table_array *v)
{
	v->a[131940] = anon_sym_PIPE_AMP;
	v->a[131941] = anon_sym_AMP_GT_GT;
	v->a[131942] = anon_sym_GT_PIPE;
	v->a[131943] = anon_sym_LT_AMP_DASH;
	v->a[131944] = anon_sym_GT_AMP_DASH;
	v->a[131945] = anon_sym_LT_LT_DASH;
	v->a[131946] = anon_sym_LT_LT_LT;
	v->a[131947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131948] = anon_sym_DOLLAR_LBRACK;
	v->a[131949] = aux_sym_concatenation_token1;
	v->a[131950] = sym__special_character;
	v->a[131951] = anon_sym_DQUOTE;
	v->a[131952] = sym_raw_string;
	v->a[131953] = sym_ansi_c_string;
	v->a[131954] = anon_sym_DOLLAR_LBRACE;
	v->a[131955] = anon_sym_DOLLAR_BQUOTE;
	v->a[131956] = anon_sym_LT_LPAREN;
	v->a[131957] = anon_sym_GT_LPAREN;
	v->a[131958] = 5;
	v->a[131959] = actions(71);
	small_parse_table_6598(v);
}

void	small_parse_table_6598(t_small_parse_table_array *v)
{
	v->a[131960] = 1;
	v->a[131961] = sym_comment;
	v->a[131962] = state(2511);
	v->a[131963] = 1;
	v->a[131964] = aux_sym_concatenation_repeat1;
	v->a[131965] = actions(6714);
	v->a[131966] = 2;
	v->a[131967] = sym__concat;
	v->a[131968] = aux_sym_concatenation_token1;
	v->a[131969] = actions(1251);
	v->a[131970] = 14;
	v->a[131971] = anon_sym_EQ;
	v->a[131972] = anon_sym_PIPE;
	v->a[131973] = anon_sym_CARET;
	v->a[131974] = anon_sym_AMP;
	v->a[131975] = anon_sym_LT;
	v->a[131976] = anon_sym_GT;
	v->a[131977] = anon_sym_LT_LT;
	v->a[131978] = anon_sym_GT_GT;
	v->a[131979] = anon_sym_PLUS;
	small_parse_table_6599(v);
}

void	small_parse_table_6599(t_small_parse_table_array *v)
{
	v->a[131980] = anon_sym_DASH;
	v->a[131981] = anon_sym_STAR;
	v->a[131982] = anon_sym_SLASH;
	v->a[131983] = anon_sym_PERCENT;
	v->a[131984] = anon_sym_STAR_STAR;
	v->a[131985] = actions(1253);
	v->a[131986] = 23;
	v->a[131987] = sym_test_operator;
	v->a[131988] = anon_sym_PLUS_PLUS;
	v->a[131989] = anon_sym_DASH_DASH;
	v->a[131990] = anon_sym_PLUS_EQ;
	v->a[131991] = anon_sym_DASH_EQ;
	v->a[131992] = anon_sym_STAR_EQ;
	v->a[131993] = anon_sym_SLASH_EQ;
	v->a[131994] = anon_sym_PERCENT_EQ;
	v->a[131995] = anon_sym_STAR_STAR_EQ;
	v->a[131996] = anon_sym_LT_LT_EQ;
	v->a[131997] = anon_sym_GT_GT_EQ;
	v->a[131998] = anon_sym_AMP_EQ;
	v->a[131999] = anon_sym_CARET_EQ;
	small_parse_table_6600(v);
}

/* EOF small_parse_table_1319.c */
