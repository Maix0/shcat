/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_651.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3255(t_small_parse_table_array *v)
{
	v->a[65100] = actions(4128);
	v->a[65101] = 2;
	v->a[65102] = anon_sym_LT;
	v->a[65103] = anon_sym_GT;
	v->a[65104] = actions(4130);
	v->a[65105] = 2;
	v->a[65106] = anon_sym_GT_GT;
	v->a[65107] = anon_sym_LT_LT;
	v->a[65108] = actions(4142);
	v->a[65109] = 2;
	v->a[65110] = anon_sym_EQ_EQ;
	v->a[65111] = anon_sym_BANG_EQ;
	v->a[65112] = actions(4144);
	v->a[65113] = 2;
	v->a[65114] = anon_sym_LT_EQ;
	v->a[65115] = anon_sym_GT_EQ;
	v->a[65116] = actions(4146);
	v->a[65117] = 2;
	v->a[65118] = anon_sym_PLUS;
	v->a[65119] = anon_sym_DASH;
	small_parse_table_3256(v);
}

void	small_parse_table_3256(t_small_parse_table_array *v)
{
	v->a[65120] = actions(4152);
	v->a[65121] = 2;
	v->a[65122] = anon_sym_PLUS_PLUS2;
	v->a[65123] = anon_sym_DASH_DASH2;
	v->a[65124] = actions(4148);
	v->a[65125] = 3;
	v->a[65126] = anon_sym_STAR;
	v->a[65127] = anon_sym_SLASH;
	v->a[65128] = anon_sym_PERCENT;
	v->a[65129] = actions(4136);
	v->a[65130] = 10;
	v->a[65131] = anon_sym_PLUS_EQ;
	v->a[65132] = anon_sym_DASH_EQ;
	v->a[65133] = anon_sym_STAR_EQ;
	v->a[65134] = anon_sym_SLASH_EQ;
	v->a[65135] = anon_sym_PERCENT_EQ;
	v->a[65136] = anon_sym_LT_LT_EQ;
	v->a[65137] = anon_sym_GT_GT_EQ;
	v->a[65138] = anon_sym_AMP_EQ;
	v->a[65139] = anon_sym_CARET_EQ;
	small_parse_table_3257(v);
}

void	small_parse_table_3257(t_small_parse_table_array *v)
{
	v->a[65140] = anon_sym_PIPE_EQ;
	v->a[65141] = 6;
	v->a[65142] = actions(57);
	v->a[65143] = 1;
	v->a[65144] = sym_comment;
	v->a[65145] = actions(4165);
	v->a[65146] = 1;
	v->a[65147] = aux_sym_concatenation_token1;
	v->a[65148] = actions(4183);
	v->a[65149] = 1;
	v->a[65150] = sym__concat;
	v->a[65151] = state(1373);
	v->a[65152] = 1;
	v->a[65153] = aux_sym_concatenation_repeat1;
	v->a[65154] = actions(2688);
	v->a[65155] = 13;
	v->a[65156] = anon_sym_PIPE;
	v->a[65157] = anon_sym_LT;
	v->a[65158] = anon_sym_GT;
	v->a[65159] = anon_sym_AMP_GT;
	small_parse_table_3258(v);
}

void	small_parse_table_3258(t_small_parse_table_array *v)
{
	v->a[65160] = anon_sym_LT_AMP;
	v->a[65161] = anon_sym_GT_AMP;
	v->a[65162] = anon_sym_LT_LT;
	v->a[65163] = anon_sym_DOLLAR;
	v->a[65164] = aux_sym_number_token1;
	v->a[65165] = aux_sym_number_token2;
	v->a[65166] = anon_sym_DOLLAR_LPAREN;
	v->a[65167] = anon_sym_BQUOTE;
	v->a[65168] = sym_word;
	v->a[65169] = actions(2690);
	v->a[65170] = 19;
	v->a[65171] = sym_file_descriptor;
	v->a[65172] = sym_test_operator;
	v->a[65173] = sym__bare_dollar;
	v->a[65174] = sym__brace_start;
	v->a[65175] = anon_sym_PIPE_AMP;
	v->a[65176] = anon_sym_AMP_AMP;
	v->a[65177] = anon_sym_PIPE_PIPE;
	v->a[65178] = anon_sym_GT_GT;
	v->a[65179] = anon_sym_AMP_GT_GT;
	small_parse_table_3259(v);
}

void	small_parse_table_3259(t_small_parse_table_array *v)
{
	v->a[65180] = anon_sym_GT_PIPE;
	v->a[65181] = anon_sym_LT_AMP_DASH;
	v->a[65182] = anon_sym_GT_AMP_DASH;
	v->a[65183] = anon_sym_LT_LT_DASH;
	v->a[65184] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65185] = sym__special_character;
	v->a[65186] = anon_sym_DQUOTE;
	v->a[65187] = sym_raw_string;
	v->a[65188] = anon_sym_DOLLAR_LBRACE;
	v->a[65189] = anon_sym_DOLLAR_BQUOTE;
	v->a[65190] = 19;
	v->a[65191] = actions(57);
	v->a[65192] = 1;
	v->a[65193] = sym_comment;
	v->a[65194] = actions(4120);
	v->a[65195] = 1;
	v->a[65196] = anon_sym_PIPE;
	v->a[65197] = actions(4122);
	v->a[65198] = 1;
	v->a[65199] = anon_sym_AMP_AMP;
	small_parse_table_3260(v);
}

/* EOF small_parse_table_651.c */
