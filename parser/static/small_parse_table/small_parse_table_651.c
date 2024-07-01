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
	v->a[65100] = anon_sym_GT_GT;
	v->a[65101] = anon_sym_LT_AMP;
	v->a[65102] = anon_sym_GT_AMP;
	v->a[65103] = anon_sym_GT_PIPE;
	v->a[65104] = anon_sym_LT_AMP_DASH;
	v->a[65105] = anon_sym_GT_AMP_DASH;
	v->a[65106] = anon_sym_LT_LT;
	v->a[65107] = anon_sym_LT_LT_DASH;
	v->a[65108] = anon_sym_AMP;
	v->a[65109] = anon_sym_SEMI;
	v->a[65110] = 6;
	v->a[65111] = actions(3);
	v->a[65112] = 1;
	v->a[65113] = sym_comment;
	v->a[65114] = actions(2097);
	v->a[65115] = 1;
	v->a[65116] = aux_sym_concatenation_token1;
	v->a[65117] = actions(2099);
	v->a[65118] = 1;
	v->a[65119] = sym__concat;
	small_parse_table_3256(v);
}

void	small_parse_table_3256(t_small_parse_table_array *v)
{
	v->a[65120] = state(1166);
	v->a[65121] = 1;
	v->a[65122] = aux_sym_concatenation_repeat1;
	v->a[65123] = actions(1238);
	v->a[65124] = 2;
	v->a[65125] = sym_file_descriptor;
	v->a[65126] = sym_variable_name;
	v->a[65127] = actions(1234);
	v->a[65128] = 17;
	v->a[65129] = anon_sym_LT;
	v->a[65130] = anon_sym_GT;
	v->a[65131] = anon_sym_GT_GT;
	v->a[65132] = anon_sym_LT_AMP;
	v->a[65133] = anon_sym_GT_AMP;
	v->a[65134] = anon_sym_GT_PIPE;
	v->a[65135] = anon_sym_LT_AMP_DASH;
	v->a[65136] = anon_sym_GT_AMP_DASH;
	v->a[65137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65138] = anon_sym_DOLLAR;
	v->a[65139] = anon_sym_DQUOTE;
	small_parse_table_3257(v);
}

void	small_parse_table_3257(t_small_parse_table_array *v)
{
	v->a[65140] = sym_raw_string;
	v->a[65141] = sym_number;
	v->a[65142] = anon_sym_DOLLAR_LBRACE;
	v->a[65143] = anon_sym_DOLLAR_LPAREN;
	v->a[65144] = anon_sym_BQUOTE;
	v->a[65145] = sym_word;
	v->a[65146] = 11;
	v->a[65147] = actions(3);
	v->a[65148] = 1;
	v->a[65149] = sym_comment;
	v->a[65150] = actions(695);
	v->a[65151] = 1;
	v->a[65152] = anon_sym_BQUOTE;
	v->a[65153] = actions(2009);
	v->a[65154] = 1;
	v->a[65155] = aux_sym_heredoc_redirect_token1;
	v->a[65156] = actions(2041);
	v->a[65157] = 1;
	v->a[65158] = sym_file_descriptor;
	v->a[65159] = state(816);
	small_parse_table_3258(v);
}

void	small_parse_table_3258(t_small_parse_table_array *v)
{
	v->a[65160] = 1;
	v->a[65161] = sym_terminator;
	v->a[65162] = actions(754);
	v->a[65163] = 2;
	v->a[65164] = anon_sym_LT_LT;
	v->a[65165] = anon_sym_LT_LT_DASH;
	v->a[65166] = actions(963);
	v->a[65167] = 2;
	v->a[65168] = anon_sym_AMP_AMP;
	v->a[65169] = anon_sym_PIPE_PIPE;
	v->a[65170] = actions(2039);
	v->a[65171] = 2;
	v->a[65172] = anon_sym_LT_AMP_DASH;
	v->a[65173] = anon_sym_GT_AMP_DASH;
	v->a[65174] = actions(750);
	v->a[65175] = 3;
	v->a[65176] = anon_sym_SEMI_SEMI;
	v->a[65177] = anon_sym_AMP;
	v->a[65178] = anon_sym_SEMI;
	v->a[65179] = state(1165);
	small_parse_table_3259(v);
}

void	small_parse_table_3259(t_small_parse_table_array *v)
{
	v->a[65180] = 3;
	v->a[65181] = sym_file_redirect;
	v->a[65182] = sym_heredoc_redirect;
	v->a[65183] = aux_sym_redirected_statement_repeat1;
	v->a[65184] = actions(2037);
	v->a[65185] = 6;
	v->a[65186] = anon_sym_LT;
	v->a[65187] = anon_sym_GT;
	v->a[65188] = anon_sym_GT_GT;
	v->a[65189] = anon_sym_LT_AMP;
	v->a[65190] = anon_sym_GT_AMP;
	v->a[65191] = anon_sym_GT_PIPE;
	v->a[65192] = 6;
	v->a[65193] = actions(3);
	v->a[65194] = 1;
	v->a[65195] = sym_comment;
	v->a[65196] = actions(2057);
	v->a[65197] = 1;
	v->a[65198] = aux_sym_concatenation_token1;
	v->a[65199] = actions(2146);
	small_parse_table_3260(v);
}

/* EOF small_parse_table_651.c */
