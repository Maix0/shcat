/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1261.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6305(t_small_parse_table_array *v)
{
	v->a[126100] = sym_file_descriptor;
	v->a[126101] = sym__concat;
	v->a[126102] = sym_variable_name;
	v->a[126103] = sym_test_operator;
	v->a[126104] = sym__brace_start;
	v->a[126105] = anon_sym_LPAREN_LPAREN;
	v->a[126106] = anon_sym_PIPE_PIPE;
	v->a[126107] = anon_sym_AMP_AMP;
	v->a[126108] = anon_sym_GT_GT;
	v->a[126109] = anon_sym_PIPE_AMP;
	v->a[126110] = anon_sym_RBRACK;
	v->a[126111] = anon_sym_AMP_GT_GT;
	v->a[126112] = anon_sym_GT_PIPE;
	v->a[126113] = anon_sym_LT_AMP_DASH;
	v->a[126114] = anon_sym_GT_AMP_DASH;
	v->a[126115] = anon_sym_LT_LT_DASH;
	v->a[126116] = anon_sym_LT_LT_LT;
	v->a[126117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126118] = anon_sym_DOLLAR_LBRACK;
	v->a[126119] = aux_sym_concatenation_token1;
	small_parse_table_6306(v);
}

void	small_parse_table_6306(t_small_parse_table_array *v)
{
	v->a[126120] = anon_sym_DQUOTE;
	v->a[126121] = sym_raw_string;
	v->a[126122] = sym_ansi_c_string;
	v->a[126123] = anon_sym_DOLLAR_LBRACE;
	v->a[126124] = anon_sym_DOLLAR_BQUOTE;
	v->a[126125] = anon_sym_LT_LPAREN;
	v->a[126126] = anon_sym_GT_LPAREN;
	v->a[126127] = 3;
	v->a[126128] = actions(71);
	v->a[126129] = 1;
	v->a[126130] = sym_comment;
	v->a[126131] = actions(1324);
	v->a[126132] = 14;
	v->a[126133] = anon_sym_PIPE;
	v->a[126134] = anon_sym_LT;
	v->a[126135] = anon_sym_GT;
	v->a[126136] = anon_sym_LT_LT;
	v->a[126137] = anon_sym_AMP_GT;
	v->a[126138] = anon_sym_LT_AMP;
	v->a[126139] = anon_sym_GT_AMP;
	small_parse_table_6307(v);
}

void	small_parse_table_6307(t_small_parse_table_array *v)
{
	v->a[126140] = anon_sym_DOLLAR;
	v->a[126141] = sym__special_character;
	v->a[126142] = aux_sym_number_token1;
	v->a[126143] = aux_sym_number_token2;
	v->a[126144] = anon_sym_DOLLAR_LPAREN;
	v->a[126145] = anon_sym_BQUOTE;
	v->a[126146] = sym_word;
	v->a[126147] = actions(1326);
	v->a[126148] = 27;
	v->a[126149] = sym_file_descriptor;
	v->a[126150] = sym__concat;
	v->a[126151] = sym_variable_name;
	v->a[126152] = sym_test_operator;
	v->a[126153] = sym__brace_start;
	v->a[126154] = anon_sym_LPAREN_LPAREN;
	v->a[126155] = anon_sym_PIPE_PIPE;
	v->a[126156] = anon_sym_AMP_AMP;
	v->a[126157] = anon_sym_GT_GT;
	v->a[126158] = anon_sym_PIPE_AMP;
	v->a[126159] = anon_sym_RBRACK;
	small_parse_table_6308(v);
}

void	small_parse_table_6308(t_small_parse_table_array *v)
{
	v->a[126160] = anon_sym_AMP_GT_GT;
	v->a[126161] = anon_sym_GT_PIPE;
	v->a[126162] = anon_sym_LT_AMP_DASH;
	v->a[126163] = anon_sym_GT_AMP_DASH;
	v->a[126164] = anon_sym_LT_LT_DASH;
	v->a[126165] = anon_sym_LT_LT_LT;
	v->a[126166] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126167] = anon_sym_DOLLAR_LBRACK;
	v->a[126168] = aux_sym_concatenation_token1;
	v->a[126169] = anon_sym_DQUOTE;
	v->a[126170] = sym_raw_string;
	v->a[126171] = sym_ansi_c_string;
	v->a[126172] = anon_sym_DOLLAR_LBRACE;
	v->a[126173] = anon_sym_DOLLAR_BQUOTE;
	v->a[126174] = anon_sym_LT_LPAREN;
	v->a[126175] = anon_sym_GT_LPAREN;
	v->a[126176] = 6;
	v->a[126177] = actions(3);
	v->a[126178] = 1;
	v->a[126179] = sym_comment;
	small_parse_table_6309(v);
}

void	small_parse_table_6309(t_small_parse_table_array *v)
{
	v->a[126180] = actions(5844);
	v->a[126181] = 1;
	v->a[126182] = aux_sym_concatenation_token1;
	v->a[126183] = actions(6602);
	v->a[126184] = 1;
	v->a[126185] = sym__concat;
	v->a[126186] = state(1722);
	v->a[126187] = 1;
	v->a[126188] = aux_sym_concatenation_repeat1;
	v->a[126189] = actions(1288);
	v->a[126190] = 4;
	v->a[126191] = sym_file_descriptor;
	v->a[126192] = sym_test_operator;
	v->a[126193] = sym__brace_start;
	v->a[126194] = aux_sym_heredoc_redirect_token1;
	v->a[126195] = actions(1286);
	v->a[126196] = 34;
	v->a[126197] = anon_sym_LPAREN_LPAREN;
	v->a[126198] = anon_sym_PIPE_PIPE;
	v->a[126199] = anon_sym_AMP_AMP;
	small_parse_table_6310(v);
}

/* EOF small_parse_table_1261.c */
