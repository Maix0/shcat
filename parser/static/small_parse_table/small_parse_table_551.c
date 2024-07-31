/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_551.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2755(t_small_parse_table_array *v)
{
	v->a[55100] = 1;
	v->a[55101] = sym_comment;
	v->a[55102] = actions(2117);
	v->a[55103] = 1;
	v->a[55104] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55105] = actions(2121);
	v->a[55106] = 1;
	v->a[55107] = anon_sym_DQUOTE;
	v->a[55108] = actions(2123);
	v->a[55109] = 1;
	v->a[55110] = anon_sym_DOLLAR_LBRACE;
	v->a[55111] = actions(2125);
	v->a[55112] = 1;
	v->a[55113] = anon_sym_DOLLAR_LPAREN;
	v->a[55114] = actions(2127);
	v->a[55115] = 1;
	v->a[55116] = anon_sym_BQUOTE;
	v->a[55117] = actions(2189);
	v->a[55118] = 1;
	v->a[55119] = anon_sym_DOLLAR;
	small_parse_table_2756(v);
}

void	small_parse_table_2756(t_small_parse_table_array *v)
{
	v->a[55120] = actions(2191);
	v->a[55121] = 1;
	v->a[55122] = sym__comment_word;
	v->a[55123] = actions(2193);
	v->a[55124] = 1;
	v->a[55125] = sym__empty_value;
	v->a[55126] = state(783);
	v->a[55127] = 1;
	v->a[55128] = sym_concatenation;
	v->a[55129] = actions(2187);
	v->a[55130] = 3;
	v->a[55131] = sym_raw_string;
	v->a[55132] = sym_number;
	v->a[55133] = sym_word;
	v->a[55134] = state(631);
	v->a[55135] = 5;
	v->a[55136] = sym_arithmetic_expansion;
	v->a[55137] = sym_string;
	v->a[55138] = sym_simple_expansion;
	v->a[55139] = sym_expansion;
	small_parse_table_2757(v);
}

void	small_parse_table_2757(t_small_parse_table_array *v)
{
	v->a[55140] = sym_command_substitution;
	v->a[55141] = 10;
	v->a[55142] = actions(3);
	v->a[55143] = 1;
	v->a[55144] = sym_comment;
	v->a[55145] = actions(325);
	v->a[55146] = 1;
	v->a[55147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55148] = actions(327);
	v->a[55149] = 1;
	v->a[55150] = anon_sym_DOLLAR;
	v->a[55151] = actions(329);
	v->a[55152] = 1;
	v->a[55153] = anon_sym_DQUOTE;
	v->a[55154] = actions(333);
	v->a[55155] = 1;
	v->a[55156] = anon_sym_DOLLAR_LBRACE;
	v->a[55157] = actions(335);
	v->a[55158] = 1;
	v->a[55159] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2758(v);
}

void	small_parse_table_2758(t_small_parse_table_array *v)
{
	v->a[55160] = actions(337);
	v->a[55161] = 1;
	v->a[55162] = anon_sym_BQUOTE;
	v->a[55163] = actions(2197);
	v->a[55164] = 1;
	v->a[55165] = sym__bare_dollar;
	v->a[55166] = actions(2195);
	v->a[55167] = 5;
	v->a[55168] = aux_sym_concatenation_token1;
	v->a[55169] = sym_raw_string;
	v->a[55170] = sym_number;
	v->a[55171] = sym__comment_word;
	v->a[55172] = sym_word;
	v->a[55173] = state(689);
	v->a[55174] = 5;
	v->a[55175] = sym_arithmetic_expansion;
	v->a[55176] = sym_string;
	v->a[55177] = sym_simple_expansion;
	v->a[55178] = sym_expansion;
	v->a[55179] = sym_command_substitution;
	small_parse_table_2759(v);
}

void	small_parse_table_2759(t_small_parse_table_array *v)
{
	v->a[55180] = 12;
	v->a[55181] = actions(3);
	v->a[55182] = 1;
	v->a[55183] = sym_comment;
	v->a[55184] = actions(2202);
	v->a[55185] = 1;
	v->a[55186] = aux_sym_heredoc_redirect_token1;
	v->a[55187] = actions(2204);
	v->a[55188] = 1;
	v->a[55189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55190] = actions(2207);
	v->a[55191] = 1;
	v->a[55192] = anon_sym_DOLLAR;
	v->a[55193] = actions(2210);
	v->a[55194] = 1;
	v->a[55195] = anon_sym_DQUOTE;
	v->a[55196] = actions(2213);
	v->a[55197] = 1;
	v->a[55198] = anon_sym_DOLLAR_LBRACE;
	v->a[55199] = actions(2216);
	small_parse_table_2760(v);
}

/* EOF small_parse_table_551.c */
