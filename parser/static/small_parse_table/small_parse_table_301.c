/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_301.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1505(t_small_parse_table_array *v)
{
	v->a[30100] = sym_test_operator;
	v->a[30101] = sym__brace_start;
	v->a[30102] = state(2140);
	v->a[30103] = 3;
	v->a[30104] = sym_file_redirect;
	v->a[30105] = sym_heredoc_redirect;
	v->a[30106] = aux_sym_redirected_statement_repeat1;
	v->a[30107] = actions(2630);
	v->a[30108] = 7;
	v->a[30109] = anon_sym_SEMI_SEMI;
	v->a[30110] = anon_sym_AMP_AMP;
	v->a[30111] = anon_sym_PIPE_PIPE;
	v->a[30112] = anon_sym_LT_LT;
	v->a[30113] = anon_sym_LT_LT_DASH;
	v->a[30114] = anon_sym_AMP;
	v->a[30115] = anon_sym_SEMI;
	v->a[30116] = actions(2512);
	v->a[30117] = 22;
	v->a[30118] = anon_sym_LT;
	v->a[30119] = anon_sym_GT;
	small_parse_table_1506(v);
}

void	small_parse_table_1506(t_small_parse_table_array *v)
{
	v->a[30120] = anon_sym_GT_GT;
	v->a[30121] = anon_sym_AMP_GT;
	v->a[30122] = anon_sym_AMP_GT_GT;
	v->a[30123] = anon_sym_LT_AMP;
	v->a[30124] = anon_sym_GT_AMP;
	v->a[30125] = anon_sym_GT_PIPE;
	v->a[30126] = anon_sym_LT_AMP_DASH;
	v->a[30127] = anon_sym_GT_AMP_DASH;
	v->a[30128] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30129] = anon_sym_DOLLAR;
	v->a[30130] = sym__special_character;
	v->a[30131] = anon_sym_DQUOTE;
	v->a[30132] = sym_raw_string;
	v->a[30133] = aux_sym_number_token1;
	v->a[30134] = aux_sym_number_token2;
	v->a[30135] = anon_sym_DOLLAR_LBRACE;
	v->a[30136] = anon_sym_DOLLAR_LPAREN;
	v->a[30137] = anon_sym_BQUOTE;
	v->a[30138] = anon_sym_DOLLAR_BQUOTE;
	v->a[30139] = sym_word;
	small_parse_table_1507(v);
}

void	small_parse_table_1507(t_small_parse_table_array *v)
{
	v->a[30140] = 3;
	v->a[30141] = actions(3);
	v->a[30142] = 1;
	v->a[30143] = sym_comment;
	v->a[30144] = actions(2967);
	v->a[30145] = 6;
	v->a[30146] = sym_file_descriptor;
	v->a[30147] = sym__concat;
	v->a[30148] = sym_test_operator;
	v->a[30149] = sym__bare_dollar;
	v->a[30150] = sym__brace_start;
	v->a[30151] = aux_sym_heredoc_redirect_token1;
	v->a[30152] = actions(2965);
	v->a[30153] = 35;
	v->a[30154] = anon_sym_esac;
	v->a[30155] = anon_sym_PIPE;
	v->a[30156] = anon_sym_SEMI_SEMI;
	v->a[30157] = anon_sym_SEMI_AMP;
	v->a[30158] = anon_sym_SEMI_SEMI_AMP;
	v->a[30159] = anon_sym_PIPE_AMP;
	small_parse_table_1508(v);
}

void	small_parse_table_1508(t_small_parse_table_array *v)
{
	v->a[30160] = anon_sym_AMP_AMP;
	v->a[30161] = anon_sym_PIPE_PIPE;
	v->a[30162] = anon_sym_LT;
	v->a[30163] = anon_sym_GT;
	v->a[30164] = anon_sym_GT_GT;
	v->a[30165] = anon_sym_AMP_GT;
	v->a[30166] = anon_sym_AMP_GT_GT;
	v->a[30167] = anon_sym_LT_AMP;
	v->a[30168] = anon_sym_GT_AMP;
	v->a[30169] = anon_sym_GT_PIPE;
	v->a[30170] = anon_sym_LT_AMP_DASH;
	v->a[30171] = anon_sym_GT_AMP_DASH;
	v->a[30172] = anon_sym_LT_LT;
	v->a[30173] = anon_sym_LT_LT_DASH;
	v->a[30174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30175] = anon_sym_AMP;
	v->a[30176] = aux_sym_concatenation_token1;
	v->a[30177] = anon_sym_DOLLAR;
	v->a[30178] = sym__special_character;
	v->a[30179] = anon_sym_DQUOTE;
	small_parse_table_1509(v);
}

void	small_parse_table_1509(t_small_parse_table_array *v)
{
	v->a[30180] = sym_raw_string;
	v->a[30181] = aux_sym_number_token1;
	v->a[30182] = aux_sym_number_token2;
	v->a[30183] = anon_sym_DOLLAR_LBRACE;
	v->a[30184] = anon_sym_DOLLAR_LPAREN;
	v->a[30185] = anon_sym_BQUOTE;
	v->a[30186] = anon_sym_DOLLAR_BQUOTE;
	v->a[30187] = sym_word;
	v->a[30188] = anon_sym_SEMI;
	v->a[30189] = 3;
	v->a[30190] = actions(3);
	v->a[30191] = 1;
	v->a[30192] = sym_comment;
	v->a[30193] = actions(3062);
	v->a[30194] = 6;
	v->a[30195] = sym_file_descriptor;
	v->a[30196] = sym__concat;
	v->a[30197] = sym_variable_name;
	v->a[30198] = sym_test_operator;
	v->a[30199] = sym__brace_start;
	small_parse_table_1510(v);
}

/* EOF small_parse_table_301.c */
