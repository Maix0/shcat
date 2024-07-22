/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_773.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3865(t_small_parse_table_array *v)
{
	v->a[77300] = 1;
	v->a[77301] = aux_sym_string_repeat1;
	v->a[77302] = state(1748);
	v->a[77303] = 4;
	v->a[77304] = sym_arithmetic_expansion;
	v->a[77305] = sym_simple_expansion;
	v->a[77306] = sym_expansion;
	v->a[77307] = sym_command_substitution;
	v->a[77308] = 8;
	v->a[77309] = actions(3);
	v->a[77310] = 1;
	v->a[77311] = sym_comment;
	v->a[77312] = actions(3040);
	v->a[77313] = 1;
	v->a[77314] = anon_sym_POUND;
	v->a[77315] = actions(3042);
	v->a[77316] = 1;
	v->a[77317] = aux_sym__simple_variable_name_token1;
	v->a[77318] = actions(3044);
	v->a[77319] = 1;
	small_parse_table_3866(v);
}

void	small_parse_table_3866(t_small_parse_table_array *v)
{
	v->a[77320] = anon_sym_0;
	v->a[77321] = actions(3046);
	v->a[77322] = 1;
	v->a[77323] = sym_variable_name;
	v->a[77324] = actions(3352);
	v->a[77325] = 1;
	v->a[77326] = anon_sym_RBRACE;
	v->a[77327] = state(2003);
	v->a[77328] = 1;
	v->a[77329] = sym__expansion_body;
	v->a[77330] = actions(3038);
	v->a[77331] = 6;
	v->a[77332] = anon_sym_BANG;
	v->a[77333] = anon_sym_DASH;
	v->a[77334] = anon_sym_STAR;
	v->a[77335] = anon_sym_QMARK;
	v->a[77336] = anon_sym_DOLLAR;
	v->a[77337] = anon_sym_AT;
	v->a[77338] = 4;
	v->a[77339] = actions(3);
	small_parse_table_3867(v);
}

void	small_parse_table_3867(t_small_parse_table_array *v)
{
	v->a[77340] = 1;
	v->a[77341] = sym_comment;
	v->a[77342] = actions(3356);
	v->a[77343] = 1;
	v->a[77344] = anon_sym_esac;
	v->a[77345] = actions(3358);
	v->a[77346] = 1;
	v->a[77347] = sym_extglob_pattern;
	v->a[77348] = actions(3354);
	v->a[77349] = 10;
	v->a[77350] = anon_sym_LPAREN;
	v->a[77351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77352] = anon_sym_DOLLAR;
	v->a[77353] = anon_sym_DQUOTE;
	v->a[77354] = sym_raw_string;
	v->a[77355] = sym_number;
	v->a[77356] = anon_sym_DOLLAR_LBRACE;
	v->a[77357] = anon_sym_DOLLAR_LPAREN;
	v->a[77358] = anon_sym_BQUOTE;
	v->a[77359] = sym_word;
	small_parse_table_3868(v);
}

void	small_parse_table_3868(t_small_parse_table_array *v)
{
	v->a[77360] = 10;
	v->a[77361] = actions(3);
	v->a[77362] = 1;
	v->a[77363] = sym_comment;
	v->a[77364] = actions(3058);
	v->a[77365] = 1;
	v->a[77366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77367] = actions(3064);
	v->a[77368] = 1;
	v->a[77369] = sym_string_content;
	v->a[77370] = actions(3066);
	v->a[77371] = 1;
	v->a[77372] = anon_sym_DOLLAR_LBRACE;
	v->a[77373] = actions(3068);
	v->a[77374] = 1;
	v->a[77375] = anon_sym_DOLLAR_LPAREN;
	v->a[77376] = actions(3070);
	v->a[77377] = 1;
	v->a[77378] = anon_sym_BQUOTE;
	v->a[77379] = actions(3360);
	small_parse_table_3869(v);
}

void	small_parse_table_3869(t_small_parse_table_array *v)
{
	v->a[77380] = 1;
	v->a[77381] = anon_sym_DOLLAR;
	v->a[77382] = actions(3362);
	v->a[77383] = 1;
	v->a[77384] = anon_sym_DQUOTE;
	v->a[77385] = state(1610);
	v->a[77386] = 1;
	v->a[77387] = aux_sym_string_repeat1;
	v->a[77388] = state(1748);
	v->a[77389] = 4;
	v->a[77390] = sym_arithmetic_expansion;
	v->a[77391] = sym_simple_expansion;
	v->a[77392] = sym_expansion;
	v->a[77393] = sym_command_substitution;
	v->a[77394] = 4;
	v->a[77395] = actions(3);
	v->a[77396] = 1;
	v->a[77397] = sym_comment;
	v->a[77398] = actions(3356);
	v->a[77399] = 1;
	small_parse_table_3870(v);
}

/* EOF small_parse_table_773.c */
