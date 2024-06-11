/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_847.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4235(t_small_parse_table_array *v)
{
	v->a[84700] = anon_sym_DOLLAR_LPAREN;
	v->a[84701] = actions(3182);
	v->a[84702] = 1;
	v->a[84703] = anon_sym_BQUOTE;
	v->a[84704] = actions(3184);
	v->a[84705] = 1;
	v->a[84706] = sym__comment_word;
	v->a[84707] = actions(3186);
	v->a[84708] = 1;
	v->a[84709] = sym__empty_value;
	v->a[84710] = state(696);
	v->a[84711] = 1;
	v->a[84712] = sym_concatenation;
	v->a[84713] = actions(3322);
	v->a[84714] = 3;
	v->a[84715] = sym_raw_string;
	v->a[84716] = sym_number;
	v->a[84717] = sym_word;
	v->a[84718] = state(336);
	v->a[84719] = 5;
	small_parse_table_4236(v);
}

void	small_parse_table_4236(t_small_parse_table_array *v)
{
	v->a[84720] = sym_arithmetic_expansion;
	v->a[84721] = sym_string;
	v->a[84722] = sym_simple_expansion;
	v->a[84723] = sym_expansion;
	v->a[84724] = sym_command_substitution;
	v->a[84725] = 10;
	v->a[84726] = actions(3);
	v->a[84727] = 1;
	v->a[84728] = sym_comment;
	v->a[84729] = actions(1804);
	v->a[84730] = 1;
	v->a[84731] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84732] = actions(1808);
	v->a[84733] = 1;
	v->a[84734] = anon_sym_DQUOTE;
	v->a[84735] = actions(1810);
	v->a[84736] = 1;
	v->a[84737] = anon_sym_DOLLAR_LBRACE;
	v->a[84738] = actions(1812);
	v->a[84739] = 1;
	small_parse_table_4237(v);
}

void	small_parse_table_4237(t_small_parse_table_array *v)
{
	v->a[84740] = anon_sym_DOLLAR_LPAREN;
	v->a[84741] = actions(1814);
	v->a[84742] = 1;
	v->a[84743] = anon_sym_BQUOTE;
	v->a[84744] = actions(3232);
	v->a[84745] = 1;
	v->a[84746] = sym__bare_dollar;
	v->a[84747] = actions(3324);
	v->a[84748] = 1;
	v->a[84749] = anon_sym_DOLLAR;
	v->a[84750] = actions(3230);
	v->a[84751] = 5;
	v->a[84752] = aux_sym_concatenation_token1;
	v->a[84753] = sym_raw_string;
	v->a[84754] = sym_number;
	v->a[84755] = sym__comment_word;
	v->a[84756] = sym_word;
	v->a[84757] = state(1775);
	v->a[84758] = 5;
	v->a[84759] = sym_arithmetic_expansion;
	small_parse_table_4238(v);
}

void	small_parse_table_4238(t_small_parse_table_array *v)
{
	v->a[84760] = sym_string;
	v->a[84761] = sym_simple_expansion;
	v->a[84762] = sym_expansion;
	v->a[84763] = sym_command_substitution;
	v->a[84764] = 5;
	v->a[84765] = actions(3);
	v->a[84766] = 1;
	v->a[84767] = sym_comment;
	v->a[84768] = actions(3330);
	v->a[84769] = 1;
	v->a[84770] = sym_variable_name;
	v->a[84771] = actions(3328);
	v->a[84772] = 2;
	v->a[84773] = aux_sym__simple_variable_name_token1;
	v->a[84774] = aux_sym__multiline_variable_name_token1;
	v->a[84775] = actions(381);
	v->a[84776] = 5;
	v->a[84777] = anon_sym_in;
	v->a[84778] = anon_sym_SEMI_SEMI;
	v->a[84779] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4239(v);
}

void	small_parse_table_4239(t_small_parse_table_array *v)
{
	v->a[84780] = anon_sym_AMP;
	v->a[84781] = anon_sym_SEMI;
	v->a[84782] = actions(3326);
	v->a[84783] = 9;
	v->a[84784] = anon_sym_BANG;
	v->a[84785] = anon_sym_DASH;
	v->a[84786] = anon_sym_STAR;
	v->a[84787] = anon_sym_QMARK;
	v->a[84788] = anon_sym_DOLLAR;
	v->a[84789] = anon_sym_POUND;
	v->a[84790] = anon_sym_AT;
	v->a[84791] = anon_sym_0;
	v->a[84792] = anon_sym__;
	v->a[84793] = 10;
	v->a[84794] = actions(3);
	v->a[84795] = 1;
	v->a[84796] = sym_comment;
	v->a[84797] = actions(1963);
	v->a[84798] = 1;
	v->a[84799] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4240(v);
}

/* EOF small_parse_table_847.c */
