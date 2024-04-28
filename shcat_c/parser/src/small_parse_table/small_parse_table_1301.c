/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1301.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6505(t_small_parse_table_array *v)
{
	v->a[130100] = actions(1364);
	v->a[130101] = 24;
	v->a[130102] = sym__concat;
	v->a[130103] = sym_test_operator;
	v->a[130104] = anon_sym_PLUS_PLUS;
	v->a[130105] = anon_sym_DASH_DASH;
	v->a[130106] = anon_sym_PLUS_EQ;
	v->a[130107] = anon_sym_DASH_EQ;
	v->a[130108] = anon_sym_STAR_EQ;
	v->a[130109] = anon_sym_SLASH_EQ;
	v->a[130110] = anon_sym_PERCENT_EQ;
	v->a[130111] = anon_sym_STAR_STAR_EQ;
	v->a[130112] = anon_sym_LT_LT_EQ;
	v->a[130113] = anon_sym_GT_GT_EQ;
	v->a[130114] = anon_sym_AMP_EQ;
	v->a[130115] = anon_sym_CARET_EQ;
	v->a[130116] = anon_sym_PIPE_EQ;
	v->a[130117] = anon_sym_PIPE_PIPE;
	v->a[130118] = anon_sym_AMP_AMP;
	v->a[130119] = anon_sym_EQ_EQ;
	small_parse_table_6506(v);
}

void	small_parse_table_6506(t_small_parse_table_array *v)
{
	v->a[130120] = anon_sym_BANG_EQ;
	v->a[130121] = anon_sym_LT_EQ;
	v->a[130122] = anon_sym_GT_EQ;
	v->a[130123] = anon_sym_RBRACK;
	v->a[130124] = anon_sym_EQ_TILDE;
	v->a[130125] = anon_sym_QMARK;
	v->a[130126] = 6;
	v->a[130127] = actions(71);
	v->a[130128] = 1;
	v->a[130129] = sym_comment;
	v->a[130130] = actions(1077);
	v->a[130131] = 1;
	v->a[130132] = aux_sym_concatenation_token1;
	v->a[130133] = actions(6690);
	v->a[130134] = 1;
	v->a[130135] = sym__concat;
	v->a[130136] = state(2464);
	v->a[130137] = 1;
	v->a[130138] = aux_sym_concatenation_repeat1;
	v->a[130139] = actions(1286);
	small_parse_table_6507(v);
}

void	small_parse_table_6507(t_small_parse_table_array *v)
{
	v->a[130140] = 14;
	v->a[130141] = anon_sym_EQ;
	v->a[130142] = anon_sym_PIPE;
	v->a[130143] = anon_sym_CARET;
	v->a[130144] = anon_sym_AMP;
	v->a[130145] = anon_sym_LT;
	v->a[130146] = anon_sym_GT;
	v->a[130147] = anon_sym_LT_LT;
	v->a[130148] = anon_sym_GT_GT;
	v->a[130149] = anon_sym_PLUS;
	v->a[130150] = anon_sym_DASH;
	v->a[130151] = anon_sym_STAR;
	v->a[130152] = anon_sym_SLASH;
	v->a[130153] = anon_sym_PERCENT;
	v->a[130154] = anon_sym_STAR_STAR;
	v->a[130155] = actions(1288);
	v->a[130156] = 23;
	v->a[130157] = sym_test_operator;
	v->a[130158] = anon_sym_PLUS_PLUS;
	v->a[130159] = anon_sym_DASH_DASH;
	small_parse_table_6508(v);
}

void	small_parse_table_6508(t_small_parse_table_array *v)
{
	v->a[130160] = anon_sym_PLUS_EQ;
	v->a[130161] = anon_sym_DASH_EQ;
	v->a[130162] = anon_sym_STAR_EQ;
	v->a[130163] = anon_sym_SLASH_EQ;
	v->a[130164] = anon_sym_PERCENT_EQ;
	v->a[130165] = anon_sym_STAR_STAR_EQ;
	v->a[130166] = anon_sym_LT_LT_EQ;
	v->a[130167] = anon_sym_GT_GT_EQ;
	v->a[130168] = anon_sym_AMP_EQ;
	v->a[130169] = anon_sym_CARET_EQ;
	v->a[130170] = anon_sym_PIPE_EQ;
	v->a[130171] = anon_sym_PIPE_PIPE;
	v->a[130172] = anon_sym_AMP_AMP;
	v->a[130173] = anon_sym_EQ_EQ;
	v->a[130174] = anon_sym_BANG_EQ;
	v->a[130175] = anon_sym_LT_EQ;
	v->a[130176] = anon_sym_GT_EQ;
	v->a[130177] = anon_sym_RPAREN;
	v->a[130178] = anon_sym_EQ_TILDE;
	v->a[130179] = anon_sym_QMARK;
	small_parse_table_6509(v);
}

void	small_parse_table_6509(t_small_parse_table_array *v)
{
	v->a[130180] = 5;
	v->a[130181] = actions(71);
	v->a[130182] = 1;
	v->a[130183] = sym_comment;
	v->a[130184] = actions(6662);
	v->a[130185] = 1;
	v->a[130186] = sym__special_character;
	v->a[130187] = state(2568);
	v->a[130188] = 1;
	v->a[130189] = aux_sym__literal_repeat1;
	v->a[130190] = actions(5721);
	v->a[130191] = 12;
	v->a[130192] = anon_sym_PIPE;
	v->a[130193] = anon_sym_LT;
	v->a[130194] = anon_sym_GT;
	v->a[130195] = anon_sym_LT_LT;
	v->a[130196] = anon_sym_AMP_GT;
	v->a[130197] = anon_sym_LT_AMP;
	v->a[130198] = anon_sym_GT_AMP;
	v->a[130199] = anon_sym_DOLLAR;
	small_parse_table_6510(v);
}

/* EOF small_parse_table_1301.c */
