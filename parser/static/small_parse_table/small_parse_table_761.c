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
	v->a[76100] = sym__comment_word;
	v->a[76101] = actions(2834);
	v->a[76102] = 1;
	v->a[76103] = sym__empty_value;
	v->a[76104] = state(1183);
	v->a[76105] = 1;
	v->a[76106] = sym_concatenation;
	v->a[76107] = actions(2870);
	v->a[76108] = 3;
	v->a[76109] = sym_raw_string;
	v->a[76110] = sym_number;
	v->a[76111] = sym_word;
	v->a[76112] = state(1131);
	v->a[76113] = 5;
	v->a[76114] = sym_arithmetic_expansion;
	v->a[76115] = sym_string;
	v->a[76116] = sym_simple_expansion;
	v->a[76117] = sym_expansion;
	v->a[76118] = sym_command_substitution;
	v->a[76119] = 10;
	small_parse_table_3806(v);
}

void	small_parse_table_3806(t_small_parse_table_array *v)
{
	v->a[76120] = actions(3);
	v->a[76121] = 1;
	v->a[76122] = sym_comment;
	v->a[76123] = actions(943);
	v->a[76124] = 1;
	v->a[76125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76126] = actions(947);
	v->a[76127] = 1;
	v->a[76128] = anon_sym_DQUOTE;
	v->a[76129] = actions(949);
	v->a[76130] = 1;
	v->a[76131] = anon_sym_DOLLAR_LBRACE;
	v->a[76132] = actions(951);
	v->a[76133] = 1;
	v->a[76134] = anon_sym_DOLLAR_LPAREN;
	v->a[76135] = actions(953);
	v->a[76136] = 1;
	v->a[76137] = anon_sym_BQUOTE;
	v->a[76138] = actions(2874);
	v->a[76139] = 1;
	small_parse_table_3807(v);
}

void	small_parse_table_3807(t_small_parse_table_array *v)
{
	v->a[76140] = anon_sym_DOLLAR;
	v->a[76141] = actions(2876);
	v->a[76142] = 1;
	v->a[76143] = sym__bare_dollar;
	v->a[76144] = actions(2872);
	v->a[76145] = 5;
	v->a[76146] = aux_sym_concatenation_token1;
	v->a[76147] = sym_raw_string;
	v->a[76148] = sym_number;
	v->a[76149] = sym__comment_word;
	v->a[76150] = sym_word;
	v->a[76151] = state(1279);
	v->a[76152] = 5;
	v->a[76153] = sym_arithmetic_expansion;
	v->a[76154] = sym_string;
	v->a[76155] = sym_simple_expansion;
	v->a[76156] = sym_expansion;
	v->a[76157] = sym_command_substitution;
	v->a[76158] = 3;
	v->a[76159] = actions(870);
	small_parse_table_3808(v);
}

void	small_parse_table_3808(t_small_parse_table_array *v)
{
	v->a[76160] = 1;
	v->a[76161] = sym_comment;
	v->a[76162] = actions(1189);
	v->a[76163] = 6;
	v->a[76164] = anon_sym_PIPE;
	v->a[76165] = anon_sym_LT;
	v->a[76166] = anon_sym_GT;
	v->a[76167] = anon_sym_LT_AMP;
	v->a[76168] = anon_sym_GT_AMP;
	v->a[76169] = anon_sym_LT_LT;
	v->a[76170] = actions(1194);
	v->a[76171] = 11;
	v->a[76172] = sym_file_descriptor;
	v->a[76173] = sym__concat;
	v->a[76174] = sym_variable_name;
	v->a[76175] = anon_sym_AMP_AMP;
	v->a[76176] = anon_sym_PIPE_PIPE;
	v->a[76177] = anon_sym_GT_GT;
	v->a[76178] = anon_sym_GT_PIPE;
	v->a[76179] = anon_sym_LT_AMP_DASH;
	small_parse_table_3809(v);
}

void	small_parse_table_3809(t_small_parse_table_array *v)
{
	v->a[76180] = anon_sym_GT_AMP_DASH;
	v->a[76181] = anon_sym_LT_LT_DASH;
	v->a[76182] = aux_sym_concatenation_token1;
	v->a[76183] = 12;
	v->a[76184] = actions(3);
	v->a[76185] = 1;
	v->a[76186] = sym_comment;
	v->a[76187] = actions(2881);
	v->a[76188] = 1;
	v->a[76189] = aux_sym_heredoc_redirect_token1;
	v->a[76190] = actions(2883);
	v->a[76191] = 1;
	v->a[76192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76193] = actions(2886);
	v->a[76194] = 1;
	v->a[76195] = anon_sym_DOLLAR;
	v->a[76196] = actions(2889);
	v->a[76197] = 1;
	v->a[76198] = anon_sym_DQUOTE;
	v->a[76199] = actions(2892);
	small_parse_table_3810(v);
}

/* EOF small_parse_table_761.c */
