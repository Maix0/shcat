/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_855.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4275(t_small_parse_table_array *v)
{
	v->a[85500] = 1;
	v->a[85501] = anon_sym_BQUOTE;
	v->a[85502] = actions(3104);
	v->a[85503] = 1;
	v->a[85504] = anon_sym_DOLLAR;
	v->a[85505] = state(2012);
	v->a[85506] = 1;
	v->a[85507] = sym_concatenation;
	v->a[85508] = actions(3168);
	v->a[85509] = 3;
	v->a[85510] = sym_raw_string;
	v->a[85511] = sym_number;
	v->a[85512] = sym_word;
	v->a[85513] = state(1956);
	v->a[85514] = 5;
	v->a[85515] = sym_arithmetic_expansion;
	v->a[85516] = sym_string;
	v->a[85517] = sym_simple_expansion;
	v->a[85518] = sym_expansion;
	v->a[85519] = sym_command_substitution;
	small_parse_table_4276(v);
}

void	small_parse_table_4276(t_small_parse_table_array *v)
{
	v->a[85520] = 13;
	v->a[85521] = actions(3);
	v->a[85522] = 1;
	v->a[85523] = sym_comment;
	v->a[85524] = actions(1885);
	v->a[85525] = 1;
	v->a[85526] = anon_sym_DOLLAR;
	v->a[85527] = actions(1887);
	v->a[85528] = 1;
	v->a[85529] = anon_sym_DQUOTE;
	v->a[85530] = actions(1889);
	v->a[85531] = 1;
	v->a[85532] = anon_sym_DOLLAR_LBRACE;
	v->a[85533] = actions(1891);
	v->a[85534] = 1;
	v->a[85535] = anon_sym_DOLLAR_LPAREN;
	v->a[85536] = actions(1893);
	v->a[85537] = 1;
	v->a[85538] = anon_sym_BQUOTE;
	v->a[85539] = actions(3172);
	small_parse_table_4277(v);
}

void	small_parse_table_4277(t_small_parse_table_array *v)
{
	v->a[85540] = 1;
	v->a[85541] = anon_sym_RBRACE;
	v->a[85542] = actions(3174);
	v->a[85543] = 1;
	v->a[85544] = sym_variable_name;
	v->a[85545] = actions(3176);
	v->a[85546] = 1;
	v->a[85547] = sym__expansion_word;
	v->a[85548] = state(2276);
	v->a[85549] = 1;
	v->a[85550] = sym__concatenation_in_expansion;
	v->a[85551] = actions(3170);
	v->a[85552] = 2;
	v->a[85553] = sym_raw_string;
	v->a[85554] = sym_word;
	v->a[85555] = state(2073);
	v->a[85556] = 2;
	v->a[85557] = sym_string;
	v->a[85558] = sym_expansion;
	v->a[85559] = state(2077);
	small_parse_table_4278(v);
}

void	small_parse_table_4278(t_small_parse_table_array *v)
{
	v->a[85560] = 2;
	v->a[85561] = sym_simple_expansion;
	v->a[85562] = sym_command_substitution;
	v->a[85563] = 6;
	v->a[85564] = actions(3);
	v->a[85565] = 1;
	v->a[85566] = sym_comment;
	v->a[85567] = actions(3178);
	v->a[85568] = 1;
	v->a[85569] = anon_sym_RBRACE;
	v->a[85570] = actions(3180);
	v->a[85571] = 1;
	v->a[85572] = anon_sym_PERCENT;
	v->a[85573] = state(2296);
	v->a[85574] = 2;
	v->a[85575] = sym_expansion_expression;
	v->a[85576] = sym_expansion_regex;
	v->a[85577] = actions(3182);
	v->a[85578] = 3;
	v->a[85579] = sym__immediate_double_hash;
	small_parse_table_4279(v);
}

void	small_parse_table_4279(t_small_parse_table_array *v)
{
	v->a[85580] = anon_sym_POUND;
	v->a[85581] = anon_sym_PERCENT_PERCENT;
	v->a[85582] = actions(3184);
	v->a[85583] = 8;
	v->a[85584] = anon_sym_COLON_DASH;
	v->a[85585] = anon_sym_DASH3;
	v->a[85586] = anon_sym_COLON_EQ;
	v->a[85587] = anon_sym_EQ2;
	v->a[85588] = anon_sym_COLON_QMARK;
	v->a[85589] = anon_sym_QMARK2;
	v->a[85590] = anon_sym_COLON_PLUS;
	v->a[85591] = anon_sym_PLUS3;
	v->a[85592] = 6;
	v->a[85593] = actions(3);
	v->a[85594] = 1;
	v->a[85595] = sym_comment;
	v->a[85596] = actions(3180);
	v->a[85597] = 1;
	v->a[85598] = anon_sym_PERCENT;
	v->a[85599] = actions(3186);
	small_parse_table_4280(v);
}

/* EOF small_parse_table_855.c */
