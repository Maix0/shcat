/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_950.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4750(t_small_parse_table_array *v)
{
	v->a[95000] = anon_sym_DOLLAR_LBRACE;
	v->a[95001] = actions(3866);
	v->a[95002] = 1;
	v->a[95003] = anon_sym_DOLLAR_LPAREN;
	v->a[95004] = actions(3868);
	v->a[95005] = 1;
	v->a[95006] = anon_sym_BQUOTE;
	v->a[95007] = actions(3930);
	v->a[95008] = 1;
	v->a[95009] = anon_sym_DOLLAR;
	v->a[95010] = actions(3932);
	v->a[95011] = 1;
	v->a[95012] = anon_sym_DQUOTE;
	v->a[95013] = state(1987);
	v->a[95014] = 1;
	v->a[95015] = aux_sym_string_repeat1;
	v->a[95016] = state(2107);
	v->a[95017] = 4;
	v->a[95018] = sym_arithmetic_expansion;
	v->a[95019] = sym_simple_expansion;
	small_parse_table_4751(v);
}

void	small_parse_table_4751(t_small_parse_table_array *v)
{
	v->a[95020] = sym_expansion;
	v->a[95021] = sym_command_substitution;
	v->a[95022] = 4;
	v->a[95023] = actions(3);
	v->a[95024] = 1;
	v->a[95025] = sym_comment;
	v->a[95026] = actions(441);
	v->a[95027] = 1;
	v->a[95028] = sym_variable_name;
	v->a[95029] = actions(439);
	v->a[95030] = 2;
	v->a[95031] = aux_sym__simple_variable_name_token1;
	v->a[95032] = aux_sym__multiline_variable_name_token1;
	v->a[95033] = actions(437);
	v->a[95034] = 9;
	v->a[95035] = anon_sym_BANG;
	v->a[95036] = anon_sym_DASH;
	v->a[95037] = anon_sym_STAR;
	v->a[95038] = anon_sym_QMARK;
	v->a[95039] = anon_sym_DOLLAR;
	small_parse_table_4752(v);
}

void	small_parse_table_4752(t_small_parse_table_array *v)
{
	v->a[95040] = anon_sym_POUND;
	v->a[95041] = anon_sym_AT;
	v->a[95042] = anon_sym_0;
	v->a[95043] = anon_sym__;
	v->a[95044] = 10;
	v->a[95045] = actions(3);
	v->a[95046] = 1;
	v->a[95047] = sym_comment;
	v->a[95048] = actions(3856);
	v->a[95049] = 1;
	v->a[95050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95051] = actions(3862);
	v->a[95052] = 1;
	v->a[95053] = sym_string_content;
	v->a[95054] = actions(3864);
	v->a[95055] = 1;
	v->a[95056] = anon_sym_DOLLAR_LBRACE;
	v->a[95057] = actions(3866);
	v->a[95058] = 1;
	v->a[95059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4753(v);
}

void	small_parse_table_4753(t_small_parse_table_array *v)
{
	v->a[95060] = actions(3868);
	v->a[95061] = 1;
	v->a[95062] = anon_sym_BQUOTE;
	v->a[95063] = actions(3934);
	v->a[95064] = 1;
	v->a[95065] = anon_sym_DOLLAR;
	v->a[95066] = actions(3936);
	v->a[95067] = 1;
	v->a[95068] = anon_sym_DQUOTE;
	v->a[95069] = state(1969);
	v->a[95070] = 1;
	v->a[95071] = aux_sym_string_repeat1;
	v->a[95072] = state(2107);
	v->a[95073] = 4;
	v->a[95074] = sym_arithmetic_expansion;
	v->a[95075] = sym_simple_expansion;
	v->a[95076] = sym_expansion;
	v->a[95077] = sym_command_substitution;
	v->a[95078] = 4;
	v->a[95079] = actions(3);
	small_parse_table_4754(v);
}

void	small_parse_table_4754(t_small_parse_table_array *v)
{
	v->a[95080] = 1;
	v->a[95081] = sym_comment;
	v->a[95082] = actions(417);
	v->a[95083] = 1;
	v->a[95084] = sym_variable_name;
	v->a[95085] = actions(415);
	v->a[95086] = 2;
	v->a[95087] = aux_sym__simple_variable_name_token1;
	v->a[95088] = aux_sym__multiline_variable_name_token1;
	v->a[95089] = actions(413);
	v->a[95090] = 9;
	v->a[95091] = anon_sym_BANG;
	v->a[95092] = anon_sym_DASH;
	v->a[95093] = anon_sym_STAR;
	v->a[95094] = anon_sym_QMARK;
	v->a[95095] = anon_sym_DOLLAR;
	v->a[95096] = anon_sym_POUND;
	v->a[95097] = anon_sym_AT;
	v->a[95098] = anon_sym_0;
	v->a[95099] = anon_sym__;
	small_parse_table_4755(v);
}

/* EOF small_parse_table_950.c */
