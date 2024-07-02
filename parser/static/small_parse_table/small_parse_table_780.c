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
	v->a[78000] = actions(3116);
	v->a[78001] = 1;
	v->a[78002] = anon_sym_BQUOTE;
	v->a[78003] = actions(3296);
	v->a[78004] = 1;
	v->a[78005] = anon_sym_DOLLAR;
	v->a[78006] = actions(3298);
	v->a[78007] = 1;
	v->a[78008] = anon_sym_DQUOTE;
	v->a[78009] = state(1672);
	v->a[78010] = 1;
	v->a[78011] = aux_sym_string_repeat1;
	v->a[78012] = state(1748);
	v->a[78013] = 4;
	v->a[78014] = sym_arithmetic_expansion;
	v->a[78015] = sym_simple_expansion;
	v->a[78016] = sym_expansion;
	v->a[78017] = sym_command_substitution;
	v->a[78018] = 10;
	v->a[78019] = actions(3);
	small_parse_table_3901(v);
}

void	small_parse_table_3901(t_small_parse_table_array *v)
{
	v->a[78020] = 1;
	v->a[78021] = sym_comment;
	v->a[78022] = actions(3104);
	v->a[78023] = 1;
	v->a[78024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78025] = actions(3110);
	v->a[78026] = 1;
	v->a[78027] = sym_string_content;
	v->a[78028] = actions(3112);
	v->a[78029] = 1;
	v->a[78030] = anon_sym_DOLLAR_LBRACE;
	v->a[78031] = actions(3114);
	v->a[78032] = 1;
	v->a[78033] = anon_sym_DOLLAR_LPAREN;
	v->a[78034] = actions(3116);
	v->a[78035] = 1;
	v->a[78036] = anon_sym_BQUOTE;
	v->a[78037] = actions(3300);
	v->a[78038] = 1;
	v->a[78039] = anon_sym_DOLLAR;
	small_parse_table_3902(v);
}

void	small_parse_table_3902(t_small_parse_table_array *v)
{
	v->a[78040] = actions(3302);
	v->a[78041] = 1;
	v->a[78042] = anon_sym_DQUOTE;
	v->a[78043] = state(1705);
	v->a[78044] = 1;
	v->a[78045] = aux_sym_string_repeat1;
	v->a[78046] = state(1748);
	v->a[78047] = 4;
	v->a[78048] = sym_arithmetic_expansion;
	v->a[78049] = sym_simple_expansion;
	v->a[78050] = sym_expansion;
	v->a[78051] = sym_command_substitution;
	v->a[78052] = 4;
	v->a[78053] = actions(3);
	v->a[78054] = 1;
	v->a[78055] = sym_comment;
	v->a[78056] = actions(3306);
	v->a[78057] = 1;
	v->a[78058] = anon_sym_esac;
	v->a[78059] = actions(3308);
	small_parse_table_3903(v);
}

void	small_parse_table_3903(t_small_parse_table_array *v)
{
	v->a[78060] = 1;
	v->a[78061] = sym_extglob_pattern;
	v->a[78062] = actions(3304);
	v->a[78063] = 10;
	v->a[78064] = anon_sym_LPAREN;
	v->a[78065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78066] = anon_sym_DOLLAR;
	v->a[78067] = anon_sym_DQUOTE;
	v->a[78068] = sym_raw_string;
	v->a[78069] = sym_number;
	v->a[78070] = anon_sym_DOLLAR_LBRACE;
	v->a[78071] = anon_sym_DOLLAR_LPAREN;
	v->a[78072] = anon_sym_BQUOTE;
	v->a[78073] = sym_word;
	v->a[78074] = 10;
	v->a[78075] = actions(3);
	v->a[78076] = 1;
	v->a[78077] = sym_comment;
	v->a[78078] = actions(3104);
	v->a[78079] = 1;
	small_parse_table_3904(v);
}

void	small_parse_table_3904(t_small_parse_table_array *v)
{
	v->a[78080] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78081] = actions(3110);
	v->a[78082] = 1;
	v->a[78083] = sym_string_content;
	v->a[78084] = actions(3112);
	v->a[78085] = 1;
	v->a[78086] = anon_sym_DOLLAR_LBRACE;
	v->a[78087] = actions(3114);
	v->a[78088] = 1;
	v->a[78089] = anon_sym_DOLLAR_LPAREN;
	v->a[78090] = actions(3116);
	v->a[78091] = 1;
	v->a[78092] = anon_sym_BQUOTE;
	v->a[78093] = actions(3310);
	v->a[78094] = 1;
	v->a[78095] = anon_sym_DOLLAR;
	v->a[78096] = actions(3312);
	v->a[78097] = 1;
	v->a[78098] = anon_sym_DQUOTE;
	v->a[78099] = state(1661);
	small_parse_table_3905(v);
}

/* EOF small_parse_table_780.c */
