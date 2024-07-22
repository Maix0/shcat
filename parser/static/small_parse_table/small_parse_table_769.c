/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_769.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3845(t_small_parse_table_array *v)
{
	v->a[76900] = 1;
	v->a[76901] = sym_variable_name;
	v->a[76902] = actions(3310);
	v->a[76903] = 1;
	v->a[76904] = anon_sym_RBRACE;
	v->a[76905] = state(2049);
	v->a[76906] = 1;
	v->a[76907] = sym__expansion_body;
	v->a[76908] = actions(3038);
	v->a[76909] = 6;
	v->a[76910] = anon_sym_BANG;
	v->a[76911] = anon_sym_DASH;
	v->a[76912] = anon_sym_STAR;
	v->a[76913] = anon_sym_QMARK;
	v->a[76914] = anon_sym_DOLLAR;
	v->a[76915] = anon_sym_AT;
	v->a[76916] = 10;
	v->a[76917] = actions(3);
	v->a[76918] = 1;
	v->a[76919] = sym_comment;
	small_parse_table_3846(v);
}

void	small_parse_table_3846(t_small_parse_table_array *v)
{
	v->a[76920] = actions(3058);
	v->a[76921] = 1;
	v->a[76922] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76923] = actions(3064);
	v->a[76924] = 1;
	v->a[76925] = sym_string_content;
	v->a[76926] = actions(3066);
	v->a[76927] = 1;
	v->a[76928] = anon_sym_DOLLAR_LBRACE;
	v->a[76929] = actions(3068);
	v->a[76930] = 1;
	v->a[76931] = anon_sym_DOLLAR_LPAREN;
	v->a[76932] = actions(3070);
	v->a[76933] = 1;
	v->a[76934] = anon_sym_BQUOTE;
	v->a[76935] = actions(3312);
	v->a[76936] = 1;
	v->a[76937] = anon_sym_DOLLAR;
	v->a[76938] = actions(3314);
	v->a[76939] = 1;
	small_parse_table_3847(v);
}

void	small_parse_table_3847(t_small_parse_table_array *v)
{
	v->a[76940] = anon_sym_DQUOTE;
	v->a[76941] = state(1610);
	v->a[76942] = 1;
	v->a[76943] = aux_sym_string_repeat1;
	v->a[76944] = state(1748);
	v->a[76945] = 4;
	v->a[76946] = sym_arithmetic_expansion;
	v->a[76947] = sym_simple_expansion;
	v->a[76948] = sym_expansion;
	v->a[76949] = sym_command_substitution;
	v->a[76950] = 10;
	v->a[76951] = actions(3);
	v->a[76952] = 1;
	v->a[76953] = sym_comment;
	v->a[76954] = actions(3058);
	v->a[76955] = 1;
	v->a[76956] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76957] = actions(3064);
	v->a[76958] = 1;
	v->a[76959] = sym_string_content;
	small_parse_table_3848(v);
}

void	small_parse_table_3848(t_small_parse_table_array *v)
{
	v->a[76960] = actions(3066);
	v->a[76961] = 1;
	v->a[76962] = anon_sym_DOLLAR_LBRACE;
	v->a[76963] = actions(3068);
	v->a[76964] = 1;
	v->a[76965] = anon_sym_DOLLAR_LPAREN;
	v->a[76966] = actions(3070);
	v->a[76967] = 1;
	v->a[76968] = anon_sym_BQUOTE;
	v->a[76969] = actions(3316);
	v->a[76970] = 1;
	v->a[76971] = anon_sym_DOLLAR;
	v->a[76972] = actions(3318);
	v->a[76973] = 1;
	v->a[76974] = anon_sym_DQUOTE;
	v->a[76975] = state(1635);
	v->a[76976] = 1;
	v->a[76977] = aux_sym_string_repeat1;
	v->a[76978] = state(1748);
	v->a[76979] = 4;
	small_parse_table_3849(v);
}

void	small_parse_table_3849(t_small_parse_table_array *v)
{
	v->a[76980] = sym_arithmetic_expansion;
	v->a[76981] = sym_simple_expansion;
	v->a[76982] = sym_expansion;
	v->a[76983] = sym_command_substitution;
	v->a[76984] = 10;
	v->a[76985] = actions(3);
	v->a[76986] = 1;
	v->a[76987] = sym_comment;
	v->a[76988] = actions(3058);
	v->a[76989] = 1;
	v->a[76990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76991] = actions(3064);
	v->a[76992] = 1;
	v->a[76993] = sym_string_content;
	v->a[76994] = actions(3066);
	v->a[76995] = 1;
	v->a[76996] = anon_sym_DOLLAR_LBRACE;
	v->a[76997] = actions(3068);
	v->a[76998] = 1;
	v->a[76999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3850(v);
}

/* EOF small_parse_table_769.c */
