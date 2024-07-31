/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_613.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3065(t_small_parse_table_array *v)
{
	v->a[61300] = anon_sym_GT_GT;
	v->a[61301] = anon_sym_LT_AMP;
	v->a[61302] = anon_sym_GT_AMP;
	v->a[61303] = anon_sym_GT_PIPE;
	v->a[61304] = anon_sym_LT_GT;
	v->a[61305] = 10;
	v->a[61306] = actions(3);
	v->a[61307] = 1;
	v->a[61308] = sym_comment;
	v->a[61309] = actions(2548);
	v->a[61310] = 1;
	v->a[61311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61312] = actions(2550);
	v->a[61313] = 1;
	v->a[61314] = anon_sym_DOLLAR;
	v->a[61315] = actions(2552);
	v->a[61316] = 1;
	v->a[61317] = anon_sym_DQUOTE;
	v->a[61318] = actions(2554);
	v->a[61319] = 1;
	small_parse_table_3066(v);
}

void	small_parse_table_3066(t_small_parse_table_array *v)
{
	v->a[61320] = sym_string_content;
	v->a[61321] = actions(2556);
	v->a[61322] = 1;
	v->a[61323] = anon_sym_DOLLAR_LBRACE;
	v->a[61324] = actions(2558);
	v->a[61325] = 1;
	v->a[61326] = anon_sym_DOLLAR_LPAREN;
	v->a[61327] = actions(2560);
	v->a[61328] = 1;
	v->a[61329] = anon_sym_BQUOTE;
	v->a[61330] = state(1370);
	v->a[61331] = 1;
	v->a[61332] = aux_sym_string_repeat1;
	v->a[61333] = state(1477);
	v->a[61334] = 4;
	v->a[61335] = sym_arithmetic_expansion;
	v->a[61336] = sym_simple_expansion;
	v->a[61337] = sym_expansion;
	v->a[61338] = sym_command_substitution;
	v->a[61339] = 8;
	small_parse_table_3067(v);
}

void	small_parse_table_3067(t_small_parse_table_array *v)
{
	v->a[61340] = actions(3);
	v->a[61341] = 1;
	v->a[61342] = sym_comment;
	v->a[61343] = actions(2562);
	v->a[61344] = 1;
	v->a[61345] = anon_sym_RBRACE;
	v->a[61346] = actions(2566);
	v->a[61347] = 1;
	v->a[61348] = anon_sym_POUND;
	v->a[61349] = actions(2568);
	v->a[61350] = 1;
	v->a[61351] = aux_sym__simple_variable_name_token1;
	v->a[61352] = actions(2570);
	v->a[61353] = 1;
	v->a[61354] = anon_sym_0;
	v->a[61355] = actions(2572);
	v->a[61356] = 1;
	v->a[61357] = sym_variable_name;
	v->a[61358] = state(1670);
	v->a[61359] = 1;
	small_parse_table_3068(v);
}

void	small_parse_table_3068(t_small_parse_table_array *v)
{
	v->a[61360] = sym__expansion_body;
	v->a[61361] = actions(2564);
	v->a[61362] = 6;
	v->a[61363] = anon_sym_BANG;
	v->a[61364] = anon_sym_DASH;
	v->a[61365] = anon_sym_STAR;
	v->a[61366] = anon_sym_QMARK;
	v->a[61367] = anon_sym_DOLLAR;
	v->a[61368] = anon_sym_AT;
	v->a[61369] = 4;
	v->a[61370] = actions(3);
	v->a[61371] = 1;
	v->a[61372] = sym_comment;
	v->a[61373] = actions(2576);
	v->a[61374] = 1;
	v->a[61375] = anon_sym_esac;
	v->a[61376] = actions(2578);
	v->a[61377] = 1;
	v->a[61378] = sym_extglob_pattern;
	v->a[61379] = actions(2574);
	small_parse_table_3069(v);
}

void	small_parse_table_3069(t_small_parse_table_array *v)
{
	v->a[61380] = 10;
	v->a[61381] = anon_sym_LPAREN;
	v->a[61382] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61383] = anon_sym_DOLLAR;
	v->a[61384] = anon_sym_DQUOTE;
	v->a[61385] = sym_raw_string;
	v->a[61386] = sym_number;
	v->a[61387] = anon_sym_DOLLAR_LBRACE;
	v->a[61388] = anon_sym_DOLLAR_LPAREN;
	v->a[61389] = anon_sym_BQUOTE;
	v->a[61390] = sym_word;
	v->a[61391] = 4;
	v->a[61392] = actions(3);
	v->a[61393] = 1;
	v->a[61394] = sym_comment;
	v->a[61395] = actions(2576);
	v->a[61396] = 1;
	v->a[61397] = anon_sym_esac;
	v->a[61398] = actions(2578);
	v->a[61399] = 1;
	small_parse_table_3070(v);
}

/* EOF small_parse_table_613.c */
