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
	v->a[65100] = 10;
	v->a[65101] = actions(3);
	v->a[65102] = 1;
	v->a[65103] = sym_comment;
	v->a[65104] = actions(2504);
	v->a[65105] = 1;
	v->a[65106] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65107] = actions(2506);
	v->a[65108] = 1;
	v->a[65109] = anon_sym_DOLLAR;
	v->a[65110] = actions(2508);
	v->a[65111] = 1;
	v->a[65112] = anon_sym_DQUOTE;
	v->a[65113] = actions(2510);
	v->a[65114] = 1;
	v->a[65115] = anon_sym_DOLLAR_LBRACE;
	v->a[65116] = actions(2512);
	v->a[65117] = 1;
	v->a[65118] = anon_sym_DOLLAR_LPAREN;
	v->a[65119] = actions(2514);
	small_parse_table_3256(v);
}

void	small_parse_table_3256(t_small_parse_table_array *v)
{
	v->a[65120] = 1;
	v->a[65121] = anon_sym_BQUOTE;
	v->a[65122] = actions(2516);
	v->a[65123] = 1;
	v->a[65124] = sym__bare_dollar;
	v->a[65125] = actions(2502);
	v->a[65126] = 5;
	v->a[65127] = aux_sym_concatenation_token1;
	v->a[65128] = sym_raw_string;
	v->a[65129] = sym_number;
	v->a[65130] = sym__comment_word;
	v->a[65131] = sym_word;
	v->a[65132] = state(1383);
	v->a[65133] = 5;
	v->a[65134] = sym_arithmetic_expansion;
	v->a[65135] = sym_string;
	v->a[65136] = sym_simple_expansion;
	v->a[65137] = sym_expansion;
	v->a[65138] = sym_command_substitution;
	v->a[65139] = 3;
	small_parse_table_3257(v);
}

void	small_parse_table_3257(t_small_parse_table_array *v)
{
	v->a[65140] = actions(3);
	v->a[65141] = 1;
	v->a[65142] = sym_comment;
	v->a[65143] = actions(2249);
	v->a[65144] = 2;
	v->a[65145] = sym_file_descriptor;
	v->a[65146] = aux_sym_heredoc_redirect_token1;
	v->a[65147] = actions(2251);
	v->a[65148] = 15;
	v->a[65149] = anon_sym_esac;
	v->a[65150] = anon_sym_PIPE;
	v->a[65151] = anon_sym_SEMI_SEMI;
	v->a[65152] = anon_sym_AMP_AMP;
	v->a[65153] = anon_sym_PIPE_PIPE;
	v->a[65154] = anon_sym_LT;
	v->a[65155] = anon_sym_GT;
	v->a[65156] = anon_sym_GT_GT;
	v->a[65157] = anon_sym_LT_AMP;
	v->a[65158] = anon_sym_GT_AMP;
	v->a[65159] = anon_sym_GT_PIPE;
	small_parse_table_3258(v);
}

void	small_parse_table_3258(t_small_parse_table_array *v)
{
	v->a[65160] = anon_sym_LT_GT;
	v->a[65161] = anon_sym_LT_LT;
	v->a[65162] = anon_sym_LT_LT_DASH;
	v->a[65163] = anon_sym_SEMI;
	v->a[65164] = 10;
	v->a[65165] = actions(3);
	v->a[65166] = 1;
	v->a[65167] = sym_comment;
	v->a[65168] = actions(2520);
	v->a[65169] = 1;
	v->a[65170] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65171] = actions(2522);
	v->a[65172] = 1;
	v->a[65173] = anon_sym_DOLLAR;
	v->a[65174] = actions(2524);
	v->a[65175] = 1;
	v->a[65176] = anon_sym_DQUOTE;
	v->a[65177] = actions(2526);
	v->a[65178] = 1;
	v->a[65179] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3259(v);
}

void	small_parse_table_3259(t_small_parse_table_array *v)
{
	v->a[65180] = actions(2528);
	v->a[65181] = 1;
	v->a[65182] = anon_sym_DOLLAR_LPAREN;
	v->a[65183] = actions(2530);
	v->a[65184] = 1;
	v->a[65185] = anon_sym_BQUOTE;
	v->a[65186] = actions(2532);
	v->a[65187] = 1;
	v->a[65188] = sym__bare_dollar;
	v->a[65189] = actions(2518);
	v->a[65190] = 5;
	v->a[65191] = aux_sym_concatenation_token1;
	v->a[65192] = sym_raw_string;
	v->a[65193] = sym_number;
	v->a[65194] = sym__comment_word;
	v->a[65195] = sym_word;
	v->a[65196] = state(1097);
	v->a[65197] = 5;
	v->a[65198] = sym_arithmetic_expansion;
	v->a[65199] = sym_string;
	small_parse_table_3260(v);
}

/* EOF small_parse_table_651.c */
