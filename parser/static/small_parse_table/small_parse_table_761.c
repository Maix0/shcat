/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_761.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3805(t_small_parse_table_array *v)
{
	v->a[76100] = anon_sym_GT_PIPE;
	v->a[76101] = anon_sym_LT_GT;
	v->a[76102] = anon_sym_LT_LT_DASH;
	v->a[76103] = 3;
	v->a[76104] = actions(664);
	v->a[76105] = 1;
	v->a[76106] = sym_comment;
	v->a[76107] = actions(2063);
	v->a[76108] = 4;
	v->a[76109] = anon_sym_PIPE;
	v->a[76110] = anon_sym_LT;
	v->a[76111] = anon_sym_GT;
	v->a[76112] = anon_sym_LT_LT;
	v->a[76113] = actions(2061);
	v->a[76114] = 9;
	v->a[76115] = sym_file_descriptor;
	v->a[76116] = anon_sym_AMP_AMP;
	v->a[76117] = anon_sym_PIPE_PIPE;
	v->a[76118] = anon_sym_GT_GT;
	v->a[76119] = anon_sym_LT_AMP;
	small_parse_table_3806(v);
}

void	small_parse_table_3806(t_small_parse_table_array *v)
{
	v->a[76120] = anon_sym_GT_AMP;
	v->a[76121] = anon_sym_GT_PIPE;
	v->a[76122] = anon_sym_LT_GT;
	v->a[76123] = anon_sym_LT_LT_DASH;
	v->a[76124] = 3;
	v->a[76125] = actions(664);
	v->a[76126] = 1;
	v->a[76127] = sym_comment;
	v->a[76128] = actions(2013);
	v->a[76129] = 4;
	v->a[76130] = anon_sym_PIPE;
	v->a[76131] = anon_sym_LT;
	v->a[76132] = anon_sym_GT;
	v->a[76133] = anon_sym_LT_LT;
	v->a[76134] = actions(2011);
	v->a[76135] = 9;
	v->a[76136] = sym_file_descriptor;
	v->a[76137] = anon_sym_AMP_AMP;
	v->a[76138] = anon_sym_PIPE_PIPE;
	v->a[76139] = anon_sym_GT_GT;
	small_parse_table_3807(v);
}

void	small_parse_table_3807(t_small_parse_table_array *v)
{
	v->a[76140] = anon_sym_LT_AMP;
	v->a[76141] = anon_sym_GT_AMP;
	v->a[76142] = anon_sym_GT_PIPE;
	v->a[76143] = anon_sym_LT_GT;
	v->a[76144] = anon_sym_LT_LT_DASH;
	v->a[76145] = 10;
	v->a[76146] = actions(3);
	v->a[76147] = 1;
	v->a[76148] = sym_comment;
	v->a[76149] = actions(3071);
	v->a[76150] = 1;
	v->a[76151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76152] = actions(3073);
	v->a[76153] = 1;
	v->a[76154] = anon_sym_DOLLAR;
	v->a[76155] = actions(3075);
	v->a[76156] = 1;
	v->a[76157] = anon_sym_DQUOTE;
	v->a[76158] = actions(3077);
	v->a[76159] = 1;
	small_parse_table_3808(v);
}

void	small_parse_table_3808(t_small_parse_table_array *v)
{
	v->a[76160] = sym_string_content;
	v->a[76161] = actions(3079);
	v->a[76162] = 1;
	v->a[76163] = anon_sym_DOLLAR_LBRACE;
	v->a[76164] = actions(3081);
	v->a[76165] = 1;
	v->a[76166] = anon_sym_DOLLAR_LPAREN;
	v->a[76167] = actions(3083);
	v->a[76168] = 1;
	v->a[76169] = anon_sym_BQUOTE;
	v->a[76170] = state(1681);
	v->a[76171] = 1;
	v->a[76172] = aux_sym_string_repeat1;
	v->a[76173] = state(1739);
	v->a[76174] = 4;
	v->a[76175] = sym_arithmetic_expansion;
	v->a[76176] = sym_simple_expansion;
	v->a[76177] = sym_expansion;
	v->a[76178] = sym_command_substitution;
	v->a[76179] = 4;
	small_parse_table_3809(v);
}

void	small_parse_table_3809(t_small_parse_table_array *v)
{
	v->a[76180] = actions(3);
	v->a[76181] = 1;
	v->a[76182] = sym_comment;
	v->a[76183] = actions(3087);
	v->a[76184] = 1;
	v->a[76185] = anon_sym_esac;
	v->a[76186] = actions(3089);
	v->a[76187] = 1;
	v->a[76188] = sym_extglob_pattern;
	v->a[76189] = actions(3085);
	v->a[76190] = 10;
	v->a[76191] = anon_sym_LPAREN;
	v->a[76192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76193] = anon_sym_DOLLAR;
	v->a[76194] = anon_sym_DQUOTE;
	v->a[76195] = sym_raw_string;
	v->a[76196] = sym_number;
	v->a[76197] = anon_sym_DOLLAR_LBRACE;
	v->a[76198] = anon_sym_DOLLAR_LPAREN;
	v->a[76199] = anon_sym_BQUOTE;
	small_parse_table_3810(v);
}

/* EOF small_parse_table_761.c */
