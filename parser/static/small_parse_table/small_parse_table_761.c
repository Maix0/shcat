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
	v->a[76100] = sym_arithmetic_expansion;
	v->a[76101] = sym_string;
	v->a[76102] = sym_number;
	v->a[76103] = sym_simple_expansion;
	v->a[76104] = sym_expansion;
	v->a[76105] = sym_command_substitution;
	v->a[76106] = 12;
	v->a[76107] = actions(3);
	v->a[76108] = 1;
	v->a[76109] = sym_comment;
	v->a[76110] = actions(905);
	v->a[76111] = 1;
	v->a[76112] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76113] = actions(907);
	v->a[76114] = 1;
	v->a[76115] = anon_sym_DOLLAR;
	v->a[76116] = actions(909);
	v->a[76117] = 1;
	v->a[76118] = anon_sym_DQUOTE;
	v->a[76119] = actions(911);
	small_parse_table_3806(v);
}

void	small_parse_table_3806(t_small_parse_table_array *v)
{
	v->a[76120] = 1;
	v->a[76121] = aux_sym_number_token1;
	v->a[76122] = actions(913);
	v->a[76123] = 1;
	v->a[76124] = aux_sym_number_token2;
	v->a[76125] = actions(915);
	v->a[76126] = 1;
	v->a[76127] = anon_sym_DOLLAR_LBRACE;
	v->a[76128] = actions(917);
	v->a[76129] = 1;
	v->a[76130] = anon_sym_DOLLAR_LPAREN;
	v->a[76131] = actions(919);
	v->a[76132] = 1;
	v->a[76133] = anon_sym_BQUOTE;
	v->a[76134] = actions(3077);
	v->a[76135] = 1;
	v->a[76136] = sym__bare_dollar;
	v->a[76137] = actions(3075);
	v->a[76138] = 3;
	v->a[76139] = sym_raw_string;
	small_parse_table_3807(v);
}

void	small_parse_table_3807(t_small_parse_table_array *v)
{
	v->a[76140] = sym__comment_word;
	v->a[76141] = sym_word;
	v->a[76142] = state(981);
	v->a[76143] = 6;
	v->a[76144] = sym_arithmetic_expansion;
	v->a[76145] = sym_string;
	v->a[76146] = sym_number;
	v->a[76147] = sym_simple_expansion;
	v->a[76148] = sym_expansion;
	v->a[76149] = sym_command_substitution;
	v->a[76150] = 12;
	v->a[76151] = actions(3);
	v->a[76152] = 1;
	v->a[76153] = sym_comment;
	v->a[76154] = actions(2803);
	v->a[76155] = 1;
	v->a[76156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76157] = actions(2805);
	v->a[76158] = 1;
	v->a[76159] = anon_sym_DOLLAR;
	small_parse_table_3808(v);
}

void	small_parse_table_3808(t_small_parse_table_array *v)
{
	v->a[76160] = actions(2807);
	v->a[76161] = 1;
	v->a[76162] = anon_sym_DQUOTE;
	v->a[76163] = actions(2809);
	v->a[76164] = 1;
	v->a[76165] = aux_sym_number_token1;
	v->a[76166] = actions(2811);
	v->a[76167] = 1;
	v->a[76168] = aux_sym_number_token2;
	v->a[76169] = actions(2813);
	v->a[76170] = 1;
	v->a[76171] = anon_sym_DOLLAR_LBRACE;
	v->a[76172] = actions(2815);
	v->a[76173] = 1;
	v->a[76174] = anon_sym_DOLLAR_LPAREN;
	v->a[76175] = actions(2817);
	v->a[76176] = 1;
	v->a[76177] = anon_sym_BQUOTE;
	v->a[76178] = actions(3079);
	v->a[76179] = 2;
	small_parse_table_3809(v);
}

void	small_parse_table_3809(t_small_parse_table_array *v)
{
	v->a[76180] = sym_raw_string;
	v->a[76181] = sym_word;
	v->a[76182] = state(195);
	v->a[76183] = 2;
	v->a[76184] = sym_concatenation;
	v->a[76185] = aux_sym_for_statement_repeat1;
	v->a[76186] = state(329);
	v->a[76187] = 6;
	v->a[76188] = sym_arithmetic_expansion;
	v->a[76189] = sym_string;
	v->a[76190] = sym_number;
	v->a[76191] = sym_simple_expansion;
	v->a[76192] = sym_expansion;
	v->a[76193] = sym_command_substitution;
	v->a[76194] = 12;
	v->a[76195] = actions(3);
	v->a[76196] = 1;
	v->a[76197] = sym_comment;
	v->a[76198] = actions(2781);
	v->a[76199] = 1;
	small_parse_table_3810(v);
}

/* EOF small_parse_table_761.c */
