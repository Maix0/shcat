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
	v->a[126100] = anon_sym_PIPE_PIPE;
	v->a[126101] = anon_sym_LT_LT;
	v->a[126102] = anon_sym_LT_LT_DASH;
	v->a[126103] = actions(7130);
	v->a[126104] = 8;
	v->a[126105] = anon_sym_LT;
	v->a[126106] = anon_sym_GT;
	v->a[126107] = anon_sym_GT_GT;
	v->a[126108] = anon_sym_AMP_GT;
	v->a[126109] = anon_sym_AMP_GT_GT;
	v->a[126110] = anon_sym_LT_AMP;
	v->a[126111] = anon_sym_GT_AMP;
	v->a[126112] = anon_sym_GT_PIPE;
	v->a[126113] = 5;
	v->a[126114] = actions(3);
	v->a[126115] = 1;
	v->a[126116] = sym_comment;
	v->a[126117] = actions(7213);
	v->a[126118] = 1;
	v->a[126119] = sym__special_character;
	small_parse_table_6306(v);
}

void	small_parse_table_6306(t_small_parse_table_array *v)
{
	v->a[126120] = state(2682);
	v->a[126121] = 1;
	v->a[126122] = aux_sym__literal_repeat1;
	v->a[126123] = actions(3197);
	v->a[126124] = 3;
	v->a[126125] = sym_test_operator;
	v->a[126126] = sym__brace_start;
	v->a[126127] = aux_sym_heredoc_redirect_token1;
	v->a[126128] = actions(3195);
	v->a[126129] = 14;
	v->a[126130] = anon_sym_SEMI_SEMI;
	v->a[126131] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126132] = anon_sym_AMP;
	v->a[126133] = anon_sym_DOLLAR;
	v->a[126134] = anon_sym_DQUOTE;
	v->a[126135] = sym_raw_string;
	v->a[126136] = aux_sym_number_token1;
	v->a[126137] = aux_sym_number_token2;
	v->a[126138] = anon_sym_DOLLAR_LBRACE;
	v->a[126139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6307(v);
}

void	small_parse_table_6307(t_small_parse_table_array *v)
{
	v->a[126140] = anon_sym_BQUOTE;
	v->a[126141] = anon_sym_DOLLAR_BQUOTE;
	v->a[126142] = sym_word;
	v->a[126143] = anon_sym_SEMI;
	v->a[126144] = 3;
	v->a[126145] = actions(57);
	v->a[126146] = 1;
	v->a[126147] = sym_comment;
	v->a[126148] = actions(3032);
	v->a[126149] = 7;
	v->a[126150] = anon_sym_PIPE;
	v->a[126151] = anon_sym_LT;
	v->a[126152] = anon_sym_GT;
	v->a[126153] = anon_sym_AMP_GT;
	v->a[126154] = anon_sym_LT_AMP;
	v->a[126155] = anon_sym_GT_AMP;
	v->a[126156] = anon_sym_LT_LT;
	v->a[126157] = actions(3034);
	v->a[126158] = 12;
	v->a[126159] = sym_file_descriptor;
	small_parse_table_6308(v);
}

void	small_parse_table_6308(t_small_parse_table_array *v)
{
	v->a[126160] = sym__concat;
	v->a[126161] = anon_sym_PIPE_AMP;
	v->a[126162] = anon_sym_AMP_AMP;
	v->a[126163] = anon_sym_PIPE_PIPE;
	v->a[126164] = anon_sym_GT_GT;
	v->a[126165] = anon_sym_AMP_GT_GT;
	v->a[126166] = anon_sym_GT_PIPE;
	v->a[126167] = anon_sym_LT_AMP_DASH;
	v->a[126168] = anon_sym_GT_AMP_DASH;
	v->a[126169] = anon_sym_LT_LT_DASH;
	v->a[126170] = aux_sym_concatenation_token1;
	v->a[126171] = 8;
	v->a[126172] = actions(57);
	v->a[126173] = 1;
	v->a[126174] = sym_comment;
	v->a[126175] = actions(7216);
	v->a[126176] = 1;
	v->a[126177] = sym_file_descriptor;
	v->a[126178] = actions(5254);
	v->a[126179] = 2;
	small_parse_table_6309(v);
}

void	small_parse_table_6309(t_small_parse_table_array *v)
{
	v->a[126180] = anon_sym_PIPE;
	v->a[126181] = anon_sym_LT_LT;
	v->a[126182] = actions(7145);
	v->a[126183] = 2;
	v->a[126184] = anon_sym_LT_AMP_DASH;
	v->a[126185] = anon_sym_GT_AMP_DASH;
	v->a[126186] = state(2670);
	v->a[126187] = 2;
	v->a[126188] = sym_file_redirect;
	v->a[126189] = aux_sym_redirected_statement_repeat2;
	v->a[126190] = actions(7143);
	v->a[126191] = 3;
	v->a[126192] = anon_sym_GT_GT;
	v->a[126193] = anon_sym_AMP_GT_GT;
	v->a[126194] = anon_sym_GT_PIPE;
	v->a[126195] = actions(5256);
	v->a[126196] = 4;
	v->a[126197] = anon_sym_PIPE_AMP;
	v->a[126198] = anon_sym_AMP_AMP;
	v->a[126199] = anon_sym_PIPE_PIPE;
	small_parse_table_6310(v);
}

/* EOF small_parse_table_1261.c */
