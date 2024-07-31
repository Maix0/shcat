/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_623.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3115(t_small_parse_table_array *v)
{
	v->a[62300] = sym_comment;
	v->a[62301] = actions(2548);
	v->a[62302] = 1;
	v->a[62303] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62304] = actions(2554);
	v->a[62305] = 1;
	v->a[62306] = sym_string_content;
	v->a[62307] = actions(2556);
	v->a[62308] = 1;
	v->a[62309] = anon_sym_DOLLAR_LBRACE;
	v->a[62310] = actions(2558);
	v->a[62311] = 1;
	v->a[62312] = anon_sym_DOLLAR_LPAREN;
	v->a[62313] = actions(2560);
	v->a[62314] = 1;
	v->a[62315] = anon_sym_BQUOTE;
	v->a[62316] = actions(2671);
	v->a[62317] = 1;
	v->a[62318] = anon_sym_DOLLAR;
	v->a[62319] = actions(2673);
	small_parse_table_3116(v);
}

void	small_parse_table_3116(t_small_parse_table_array *v)
{
	v->a[62320] = 1;
	v->a[62321] = anon_sym_DQUOTE;
	v->a[62322] = state(1337);
	v->a[62323] = 1;
	v->a[62324] = aux_sym_string_repeat1;
	v->a[62325] = state(1477);
	v->a[62326] = 4;
	v->a[62327] = sym_arithmetic_expansion;
	v->a[62328] = sym_simple_expansion;
	v->a[62329] = sym_expansion;
	v->a[62330] = sym_command_substitution;
	v->a[62331] = 4;
	v->a[62332] = actions(3);
	v->a[62333] = 1;
	v->a[62334] = sym_comment;
	v->a[62335] = actions(2677);
	v->a[62336] = 1;
	v->a[62337] = anon_sym_esac;
	v->a[62338] = actions(2679);
	v->a[62339] = 1;
	small_parse_table_3117(v);
}

void	small_parse_table_3117(t_small_parse_table_array *v)
{
	v->a[62340] = sym_extglob_pattern;
	v->a[62341] = actions(2675);
	v->a[62342] = 10;
	v->a[62343] = anon_sym_LPAREN;
	v->a[62344] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62345] = anon_sym_DOLLAR;
	v->a[62346] = anon_sym_DQUOTE;
	v->a[62347] = sym_raw_string;
	v->a[62348] = sym_number;
	v->a[62349] = anon_sym_DOLLAR_LBRACE;
	v->a[62350] = anon_sym_DOLLAR_LPAREN;
	v->a[62351] = anon_sym_BQUOTE;
	v->a[62352] = sym_word;
	v->a[62353] = 3;
	v->a[62354] = actions(407);
	v->a[62355] = 1;
	v->a[62356] = sym_comment;
	v->a[62357] = actions(1879);
	v->a[62358] = 4;
	v->a[62359] = anon_sym_PIPE;
	small_parse_table_3118(v);
}

void	small_parse_table_3118(t_small_parse_table_array *v)
{
	v->a[62360] = anon_sym_LT;
	v->a[62361] = anon_sym_GT;
	v->a[62362] = anon_sym_LT_LT;
	v->a[62363] = actions(1877);
	v->a[62364] = 8;
	v->a[62365] = anon_sym_AMP_AMP;
	v->a[62366] = anon_sym_PIPE_PIPE;
	v->a[62367] = anon_sym_GT_GT;
	v->a[62368] = anon_sym_LT_AMP;
	v->a[62369] = anon_sym_GT_AMP;
	v->a[62370] = anon_sym_GT_PIPE;
	v->a[62371] = anon_sym_LT_GT;
	v->a[62372] = anon_sym_LT_LT_DASH;
	v->a[62373] = 3;
	v->a[62374] = actions(407);
	v->a[62375] = 1;
	v->a[62376] = sym_comment;
	v->a[62377] = actions(1860);
	v->a[62378] = 4;
	v->a[62379] = anon_sym_PIPE;
	small_parse_table_3119(v);
}

void	small_parse_table_3119(t_small_parse_table_array *v)
{
	v->a[62380] = anon_sym_LT;
	v->a[62381] = anon_sym_GT;
	v->a[62382] = anon_sym_LT_LT;
	v->a[62383] = actions(1858);
	v->a[62384] = 8;
	v->a[62385] = anon_sym_AMP_AMP;
	v->a[62386] = anon_sym_PIPE_PIPE;
	v->a[62387] = anon_sym_GT_GT;
	v->a[62388] = anon_sym_LT_AMP;
	v->a[62389] = anon_sym_GT_AMP;
	v->a[62390] = anon_sym_GT_PIPE;
	v->a[62391] = anon_sym_LT_GT;
	v->a[62392] = anon_sym_LT_LT_DASH;
	v->a[62393] = 10;
	v->a[62394] = actions(3);
	v->a[62395] = 1;
	v->a[62396] = sym_comment;
	v->a[62397] = actions(2548);
	v->a[62398] = 1;
	v->a[62399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3120(v);
}

/* EOF small_parse_table_623.c */
