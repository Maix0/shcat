/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_783.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3915(t_small_parse_table_array *v)
{
	v->a[78300] = 1;
	v->a[78301] = anon_sym_DQUOTE;
	v->a[78302] = actions(3311);
	v->a[78303] = 1;
	v->a[78304] = sym_string_content;
	v->a[78305] = actions(3314);
	v->a[78306] = 1;
	v->a[78307] = anon_sym_DOLLAR_LBRACE;
	v->a[78308] = actions(3317);
	v->a[78309] = 1;
	v->a[78310] = anon_sym_DOLLAR_LPAREN;
	v->a[78311] = actions(3320);
	v->a[78312] = 1;
	v->a[78313] = anon_sym_BQUOTE;
	v->a[78314] = state(1681);
	v->a[78315] = 1;
	v->a[78316] = aux_sym_string_repeat1;
	v->a[78317] = state(1739);
	v->a[78318] = 4;
	v->a[78319] = sym_arithmetic_expansion;
	small_parse_table_3916(v);
}

void	small_parse_table_3916(t_small_parse_table_array *v)
{
	v->a[78320] = sym_simple_expansion;
	v->a[78321] = sym_expansion;
	v->a[78322] = sym_command_substitution;
	v->a[78323] = 4;
	v->a[78324] = actions(3);
	v->a[78325] = 1;
	v->a[78326] = sym_comment;
	v->a[78327] = actions(3325);
	v->a[78328] = 1;
	v->a[78329] = anon_sym_esac;
	v->a[78330] = actions(3327);
	v->a[78331] = 1;
	v->a[78332] = sym_extglob_pattern;
	v->a[78333] = actions(3323);
	v->a[78334] = 10;
	v->a[78335] = anon_sym_LPAREN;
	v->a[78336] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78337] = anon_sym_DOLLAR;
	v->a[78338] = anon_sym_DQUOTE;
	v->a[78339] = sym_raw_string;
	small_parse_table_3917(v);
}

void	small_parse_table_3917(t_small_parse_table_array *v)
{
	v->a[78340] = sym_number;
	v->a[78341] = anon_sym_DOLLAR_LBRACE;
	v->a[78342] = anon_sym_DOLLAR_LPAREN;
	v->a[78343] = anon_sym_BQUOTE;
	v->a[78344] = sym_word;
	v->a[78345] = 4;
	v->a[78346] = actions(3);
	v->a[78347] = 1;
	v->a[78348] = sym_comment;
	v->a[78349] = actions(3331);
	v->a[78350] = 1;
	v->a[78351] = anon_sym_esac;
	v->a[78352] = actions(3333);
	v->a[78353] = 1;
	v->a[78354] = sym_extglob_pattern;
	v->a[78355] = actions(3329);
	v->a[78356] = 10;
	v->a[78357] = anon_sym_LPAREN;
	v->a[78358] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78359] = anon_sym_DOLLAR;
	small_parse_table_3918(v);
}

void	small_parse_table_3918(t_small_parse_table_array *v)
{
	v->a[78360] = anon_sym_DQUOTE;
	v->a[78361] = sym_raw_string;
	v->a[78362] = sym_number;
	v->a[78363] = anon_sym_DOLLAR_LBRACE;
	v->a[78364] = anon_sym_DOLLAR_LPAREN;
	v->a[78365] = anon_sym_BQUOTE;
	v->a[78366] = sym_word;
	v->a[78367] = 10;
	v->a[78368] = actions(3);
	v->a[78369] = 1;
	v->a[78370] = sym_comment;
	v->a[78371] = actions(3071);
	v->a[78372] = 1;
	v->a[78373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78374] = actions(3077);
	v->a[78375] = 1;
	v->a[78376] = sym_string_content;
	v->a[78377] = actions(3079);
	v->a[78378] = 1;
	v->a[78379] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3919(v);
}

void	small_parse_table_3919(t_small_parse_table_array *v)
{
	v->a[78380] = actions(3081);
	v->a[78381] = 1;
	v->a[78382] = anon_sym_DOLLAR_LPAREN;
	v->a[78383] = actions(3083);
	v->a[78384] = 1;
	v->a[78385] = anon_sym_BQUOTE;
	v->a[78386] = actions(3335);
	v->a[78387] = 1;
	v->a[78388] = anon_sym_DOLLAR;
	v->a[78389] = actions(3337);
	v->a[78390] = 1;
	v->a[78391] = anon_sym_DQUOTE;
	v->a[78392] = state(1681);
	v->a[78393] = 1;
	v->a[78394] = aux_sym_string_repeat1;
	v->a[78395] = state(1739);
	v->a[78396] = 4;
	v->a[78397] = sym_arithmetic_expansion;
	v->a[78398] = sym_simple_expansion;
	v->a[78399] = sym_expansion;
	small_parse_table_3920(v);
}

/* EOF small_parse_table_783.c */
