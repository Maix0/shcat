/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_753.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3765(t_small_parse_table_array *v)
{
	v->a[75300] = anon_sym_BQUOTE;
	v->a[75301] = actions(3124);
	v->a[75302] = 1;
	v->a[75303] = anon_sym_DOLLAR;
	v->a[75304] = actions(3126);
	v->a[75305] = 1;
	v->a[75306] = anon_sym_DQUOTE;
	v->a[75307] = state(1610);
	v->a[75308] = 1;
	v->a[75309] = aux_sym_string_repeat1;
	v->a[75310] = state(1748);
	v->a[75311] = 4;
	v->a[75312] = sym_arithmetic_expansion;
	v->a[75313] = sym_simple_expansion;
	v->a[75314] = sym_expansion;
	v->a[75315] = sym_command_substitution;
	v->a[75316] = 10;
	v->a[75317] = actions(3);
	v->a[75318] = 1;
	v->a[75319] = sym_comment;
	small_parse_table_3766(v);
}

void	small_parse_table_3766(t_small_parse_table_array *v)
{
	v->a[75320] = actions(3058);
	v->a[75321] = 1;
	v->a[75322] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75323] = actions(3064);
	v->a[75324] = 1;
	v->a[75325] = sym_string_content;
	v->a[75326] = actions(3066);
	v->a[75327] = 1;
	v->a[75328] = anon_sym_DOLLAR_LBRACE;
	v->a[75329] = actions(3068);
	v->a[75330] = 1;
	v->a[75331] = anon_sym_DOLLAR_LPAREN;
	v->a[75332] = actions(3070);
	v->a[75333] = 1;
	v->a[75334] = anon_sym_BQUOTE;
	v->a[75335] = actions(3128);
	v->a[75336] = 1;
	v->a[75337] = anon_sym_DOLLAR;
	v->a[75338] = actions(3130);
	v->a[75339] = 1;
	small_parse_table_3767(v);
}

void	small_parse_table_3767(t_small_parse_table_array *v)
{
	v->a[75340] = anon_sym_DQUOTE;
	v->a[75341] = state(1610);
	v->a[75342] = 1;
	v->a[75343] = aux_sym_string_repeat1;
	v->a[75344] = state(1748);
	v->a[75345] = 4;
	v->a[75346] = sym_arithmetic_expansion;
	v->a[75347] = sym_simple_expansion;
	v->a[75348] = sym_expansion;
	v->a[75349] = sym_command_substitution;
	v->a[75350] = 10;
	v->a[75351] = actions(3);
	v->a[75352] = 1;
	v->a[75353] = sym_comment;
	v->a[75354] = actions(3058);
	v->a[75355] = 1;
	v->a[75356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75357] = actions(3064);
	v->a[75358] = 1;
	v->a[75359] = sym_string_content;
	small_parse_table_3768(v);
}

void	small_parse_table_3768(t_small_parse_table_array *v)
{
	v->a[75360] = actions(3066);
	v->a[75361] = 1;
	v->a[75362] = anon_sym_DOLLAR_LBRACE;
	v->a[75363] = actions(3068);
	v->a[75364] = 1;
	v->a[75365] = anon_sym_DOLLAR_LPAREN;
	v->a[75366] = actions(3070);
	v->a[75367] = 1;
	v->a[75368] = anon_sym_BQUOTE;
	v->a[75369] = actions(3132);
	v->a[75370] = 1;
	v->a[75371] = anon_sym_DOLLAR;
	v->a[75372] = actions(3134);
	v->a[75373] = 1;
	v->a[75374] = anon_sym_DQUOTE;
	v->a[75375] = state(1611);
	v->a[75376] = 1;
	v->a[75377] = aux_sym_string_repeat1;
	v->a[75378] = state(1748);
	v->a[75379] = 4;
	small_parse_table_3769(v);
}

void	small_parse_table_3769(t_small_parse_table_array *v)
{
	v->a[75380] = sym_arithmetic_expansion;
	v->a[75381] = sym_simple_expansion;
	v->a[75382] = sym_expansion;
	v->a[75383] = sym_command_substitution;
	v->a[75384] = 8;
	v->a[75385] = actions(3);
	v->a[75386] = 1;
	v->a[75387] = sym_comment;
	v->a[75388] = actions(3040);
	v->a[75389] = 1;
	v->a[75390] = anon_sym_POUND;
	v->a[75391] = actions(3042);
	v->a[75392] = 1;
	v->a[75393] = aux_sym__simple_variable_name_token1;
	v->a[75394] = actions(3044);
	v->a[75395] = 1;
	v->a[75396] = anon_sym_0;
	v->a[75397] = actions(3046);
	v->a[75398] = 1;
	v->a[75399] = sym_variable_name;
	small_parse_table_3770(v);
}

/* EOF small_parse_table_753.c */
