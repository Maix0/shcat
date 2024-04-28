/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3119.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15595(t_small_parse_table_array *v)
{
	v->a[311900] = 1;
	v->a[311901] = anon_sym_DOLLAR_LPAREN;
	v->a[311902] = actions(11824);
	v->a[311903] = 1;
	v->a[311904] = anon_sym_BQUOTE;
	v->a[311905] = actions(11826);
	v->a[311906] = 1;
	v->a[311907] = anon_sym_DOLLAR_BQUOTE;
	v->a[311908] = state(3245);
	v->a[311909] = 2;
	v->a[311910] = sym_expansion;
	v->a[311911] = sym_command_substitution;
	v->a[311912] = 6;
	v->a[311913] = actions(71);
	v->a[311914] = 1;
	v->a[311915] = sym_comment;
	v->a[311916] = actions(9996);
	v->a[311917] = 1;
	v->a[311918] = anon_sym_DOLLAR_LBRACE;
	v->a[311919] = actions(9998);
	small_parse_table_15596(v);
}

void	small_parse_table_15596(t_small_parse_table_array *v)
{
	v->a[311920] = 1;
	v->a[311921] = anon_sym_BQUOTE;
	v->a[311922] = actions(10000);
	v->a[311923] = 1;
	v->a[311924] = anon_sym_DOLLAR_BQUOTE;
	v->a[311925] = actions(14612);
	v->a[311926] = 1;
	v->a[311927] = anon_sym_DOLLAR_LPAREN;
	v->a[311928] = state(1479);
	v->a[311929] = 2;
	v->a[311930] = sym_expansion;
	v->a[311931] = sym_command_substitution;
	v->a[311932] = 6;
	v->a[311933] = actions(71);
	v->a[311934] = 1;
	v->a[311935] = sym_comment;
	v->a[311936] = actions(8320);
	v->a[311937] = 1;
	v->a[311938] = anon_sym_DOLLAR_LBRACE;
	v->a[311939] = actions(8324);
	small_parse_table_15597(v);
}

void	small_parse_table_15597(t_small_parse_table_array *v)
{
	v->a[311940] = 1;
	v->a[311941] = anon_sym_BQUOTE;
	v->a[311942] = actions(8326);
	v->a[311943] = 1;
	v->a[311944] = anon_sym_DOLLAR_BQUOTE;
	v->a[311945] = actions(14614);
	v->a[311946] = 1;
	v->a[311947] = anon_sym_DOLLAR_LPAREN;
	v->a[311948] = state(5435);
	v->a[311949] = 2;
	v->a[311950] = sym_expansion;
	v->a[311951] = sym_command_substitution;
	v->a[311952] = 4;
	v->a[311953] = actions(71);
	v->a[311954] = 1;
	v->a[311955] = sym_comment;
	v->a[311956] = state(6373);
	v->a[311957] = 1;
	v->a[311958] = aux_sym_concatenation_repeat1;
	v->a[311959] = actions(14568);
	small_parse_table_15598(v);
}

void	small_parse_table_15598(t_small_parse_table_array *v)
{
	v->a[311960] = 2;
	v->a[311961] = sym__concat;
	v->a[311962] = aux_sym_concatenation_token1;
	v->a[311963] = actions(1263);
	v->a[311964] = 3;
	v->a[311965] = anon_sym_PIPE;
	v->a[311966] = anon_sym_RPAREN;
	v->a[311967] = sym__special_character;
	v->a[311968] = 6;
	v->a[311969] = actions(71);
	v->a[311970] = 1;
	v->a[311971] = sym_comment;
	v->a[311972] = actions(14488);
	v->a[311973] = 1;
	v->a[311974] = anon_sym_elif;
	v->a[311975] = actions(14490);
	v->a[311976] = 1;
	v->a[311977] = anon_sym_else;
	v->a[311978] = actions(14616);
	v->a[311979] = 1;
	small_parse_table_15599(v);
}

void	small_parse_table_15599(t_small_parse_table_array *v)
{
	v->a[311980] = anon_sym_fi;
	v->a[311981] = state(7012);
	v->a[311982] = 1;
	v->a[311983] = sym_else_clause;
	v->a[311984] = state(6400);
	v->a[311985] = 2;
	v->a[311986] = sym_elif_clause;
	v->a[311987] = aux_sym_if_statement_repeat1;
	v->a[311988] = 6;
	v->a[311989] = actions(71);
	v->a[311990] = 1;
	v->a[311991] = sym_comment;
	v->a[311992] = actions(14564);
	v->a[311993] = 1;
	v->a[311994] = anon_sym_PIPE;
	v->a[311995] = actions(14618);
	v->a[311996] = 1;
	v->a[311997] = anon_sym_RPAREN;
	v->a[311998] = state(6439);
	v->a[311999] = 1;
	small_parse_table_15600(v);
}

/* EOF small_parse_table_3119.c */
