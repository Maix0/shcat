/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_780.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3900(t_small_parse_table_array *v)
{
	v->a[78000] = sym__empty_value;
	v->a[78001] = state(697);
	v->a[78002] = 1;
	v->a[78003] = sym_concatenation;
	v->a[78004] = actions(2717);
	v->a[78005] = 3;
	v->a[78006] = sym_raw_string;
	v->a[78007] = sym_number;
	v->a[78008] = sym_word;
	v->a[78009] = state(504);
	v->a[78010] = 5;
	v->a[78011] = sym_arithmetic_expansion;
	v->a[78012] = sym_string;
	v->a[78013] = sym_simple_expansion;
	v->a[78014] = sym_expansion;
	v->a[78015] = sym_command_substitution;
	v->a[78016] = 10;
	v->a[78017] = actions(3);
	v->a[78018] = 1;
	v->a[78019] = sym_comment;
	small_parse_table_3901(v);
}

void	small_parse_table_3901(t_small_parse_table_array *v)
{
	v->a[78020] = actions(2737);
	v->a[78021] = 1;
	v->a[78022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78023] = actions(2739);
	v->a[78024] = 1;
	v->a[78025] = anon_sym_DOLLAR;
	v->a[78026] = actions(2741);
	v->a[78027] = 1;
	v->a[78028] = anon_sym_DQUOTE;
	v->a[78029] = actions(2743);
	v->a[78030] = 1;
	v->a[78031] = anon_sym_DOLLAR_LBRACE;
	v->a[78032] = actions(2745);
	v->a[78033] = 1;
	v->a[78034] = anon_sym_DOLLAR_LPAREN;
	v->a[78035] = actions(2747);
	v->a[78036] = 1;
	v->a[78037] = anon_sym_BQUOTE;
	v->a[78038] = actions(2749);
	v->a[78039] = 1;
	small_parse_table_3902(v);
}

void	small_parse_table_3902(t_small_parse_table_array *v)
{
	v->a[78040] = sym__bare_dollar;
	v->a[78041] = actions(2735);
	v->a[78042] = 5;
	v->a[78043] = aux_sym_concatenation_token1;
	v->a[78044] = sym_raw_string;
	v->a[78045] = sym_number;
	v->a[78046] = sym__comment_word;
	v->a[78047] = sym_word;
	v->a[78048] = state(1177);
	v->a[78049] = 5;
	v->a[78050] = sym_arithmetic_expansion;
	v->a[78051] = sym_string;
	v->a[78052] = sym_simple_expansion;
	v->a[78053] = sym_expansion;
	v->a[78054] = sym_command_substitution;
	v->a[78055] = 5;
	v->a[78056] = actions(3);
	v->a[78057] = 1;
	v->a[78058] = sym_comment;
	v->a[78059] = actions(2755);
	small_parse_table_3903(v);
}

void	small_parse_table_3903(t_small_parse_table_array *v)
{
	v->a[78060] = 1;
	v->a[78061] = sym_variable_name;
	v->a[78062] = actions(2753);
	v->a[78063] = 2;
	v->a[78064] = aux_sym__simple_variable_name_token1;
	v->a[78065] = aux_sym__multiline_variable_name_token1;
	v->a[78066] = actions(379);
	v->a[78067] = 5;
	v->a[78068] = anon_sym_in;
	v->a[78069] = anon_sym_SEMI_SEMI;
	v->a[78070] = aux_sym_heredoc_redirect_token1;
	v->a[78071] = anon_sym_AMP;
	v->a[78072] = anon_sym_SEMI;
	v->a[78073] = actions(2751);
	v->a[78074] = 9;
	v->a[78075] = anon_sym_BANG;
	v->a[78076] = anon_sym_DASH;
	v->a[78077] = anon_sym_STAR;
	v->a[78078] = anon_sym_QMARK;
	v->a[78079] = anon_sym_DOLLAR;
	small_parse_table_3904(v);
}

void	small_parse_table_3904(t_small_parse_table_array *v)
{
	v->a[78080] = anon_sym_POUND;
	v->a[78081] = anon_sym_AT;
	v->a[78082] = anon_sym_0;
	v->a[78083] = anon_sym__;
	v->a[78084] = 12;
	v->a[78085] = actions(3);
	v->a[78086] = 1;
	v->a[78087] = sym_comment;
	v->a[78088] = actions(859);
	v->a[78089] = 1;
	v->a[78090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78091] = actions(861);
	v->a[78092] = 1;
	v->a[78093] = anon_sym_DOLLAR;
	v->a[78094] = actions(863);
	v->a[78095] = 1;
	v->a[78096] = anon_sym_DQUOTE;
	v->a[78097] = actions(865);
	v->a[78098] = 1;
	v->a[78099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3905(v);
}

/* EOF small_parse_table_780.c */
