/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_489.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2445(t_small_parse_table_array *v)
{
	v->a[48900] = anon_sym_POUND;
	v->a[48901] = actions(2279);
	v->a[48902] = 1;
	v->a[48903] = aux_sym__simple_variable_name_token1;
	v->a[48904] = actions(2281);
	v->a[48905] = 1;
	v->a[48906] = anon_sym_0;
	v->a[48907] = actions(2283);
	v->a[48908] = 1;
	v->a[48909] = sym_variable_name;
	v->a[48910] = actions(2325);
	v->a[48911] = 1;
	v->a[48912] = anon_sym_RBRACE;
	v->a[48913] = state(1689);
	v->a[48914] = 1;
	v->a[48915] = sym__expansion_body;
	v->a[48916] = actions(2275);
	v->a[48917] = 6;
	v->a[48918] = anon_sym_BANG;
	v->a[48919] = anon_sym_DASH;
	small_parse_table_2446(v);
}

void	small_parse_table_2446(t_small_parse_table_array *v)
{
	v->a[48920] = anon_sym_STAR;
	v->a[48921] = anon_sym_QMARK;
	v->a[48922] = anon_sym_DOLLAR;
	v->a[48923] = anon_sym_AT;
	v->a[48924] = 10;
	v->a[48925] = actions(3);
	v->a[48926] = 1;
	v->a[48927] = sym_comment;
	v->a[48928] = actions(2293);
	v->a[48929] = 1;
	v->a[48930] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48931] = actions(2299);
	v->a[48932] = 1;
	v->a[48933] = sym_string_content;
	v->a[48934] = actions(2301);
	v->a[48935] = 1;
	v->a[48936] = anon_sym_DOLLAR_LBRACE;
	v->a[48937] = actions(2303);
	v->a[48938] = 1;
	v->a[48939] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2447(v);
}

void	small_parse_table_2447(t_small_parse_table_array *v)
{
	v->a[48940] = actions(2305);
	v->a[48941] = 1;
	v->a[48942] = anon_sym_BQUOTE;
	v->a[48943] = actions(2327);
	v->a[48944] = 1;
	v->a[48945] = anon_sym_DOLLAR;
	v->a[48946] = actions(2329);
	v->a[48947] = 1;
	v->a[48948] = anon_sym_DQUOTE;
	v->a[48949] = state(1096);
	v->a[48950] = 1;
	v->a[48951] = aux_sym_string_repeat1;
	v->a[48952] = state(1394);
	v->a[48953] = 4;
	v->a[48954] = sym_arithmetic_expansion;
	v->a[48955] = sym_simple_expansion;
	v->a[48956] = sym_expansion;
	v->a[48957] = sym_command_substitution;
	v->a[48958] = 10;
	v->a[48959] = actions(3);
	small_parse_table_2448(v);
}

void	small_parse_table_2448(t_small_parse_table_array *v)
{
	v->a[48960] = 1;
	v->a[48961] = sym_comment;
	v->a[48962] = actions(2293);
	v->a[48963] = 1;
	v->a[48964] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48965] = actions(2299);
	v->a[48966] = 1;
	v->a[48967] = sym_string_content;
	v->a[48968] = actions(2301);
	v->a[48969] = 1;
	v->a[48970] = anon_sym_DOLLAR_LBRACE;
	v->a[48971] = actions(2303);
	v->a[48972] = 1;
	v->a[48973] = anon_sym_DOLLAR_LPAREN;
	v->a[48974] = actions(2305);
	v->a[48975] = 1;
	v->a[48976] = anon_sym_BQUOTE;
	v->a[48977] = actions(2331);
	v->a[48978] = 1;
	v->a[48979] = anon_sym_DOLLAR;
	small_parse_table_2449(v);
}

void	small_parse_table_2449(t_small_parse_table_array *v)
{
	v->a[48980] = actions(2333);
	v->a[48981] = 1;
	v->a[48982] = anon_sym_DQUOTE;
	v->a[48983] = state(1176);
	v->a[48984] = 1;
	v->a[48985] = aux_sym_string_repeat1;
	v->a[48986] = state(1394);
	v->a[48987] = 4;
	v->a[48988] = sym_arithmetic_expansion;
	v->a[48989] = sym_simple_expansion;
	v->a[48990] = sym_expansion;
	v->a[48991] = sym_command_substitution;
	v->a[48992] = 8;
	v->a[48993] = actions(3);
	v->a[48994] = 1;
	v->a[48995] = sym_comment;
	v->a[48996] = actions(2277);
	v->a[48997] = 1;
	v->a[48998] = anon_sym_POUND;
	v->a[48999] = actions(2279);
	small_parse_table_2450(v);
}

/* EOF small_parse_table_489.c */
