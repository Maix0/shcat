/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_359.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1795(t_small_parse_table_array *v)
{
	v->a[35900] = 1;
	v->a[35901] = anon_sym_DOLLAR_LBRACE;
	v->a[35902] = actions(1349);
	v->a[35903] = 1;
	v->a[35904] = anon_sym_DOLLAR_LPAREN;
	v->a[35905] = actions(1351);
	v->a[35906] = 1;
	v->a[35907] = anon_sym_BQUOTE;
	v->a[35908] = actions(1353);
	v->a[35909] = 1;
	v->a[35910] = sym_extglob_pattern;
	v->a[35911] = state(768);
	v->a[35912] = 1;
	v->a[35913] = sym_terminator;
	v->a[35914] = state(809);
	v->a[35915] = 1;
	v->a[35916] = aux_sym_case_statement_repeat1;
	v->a[35917] = state(1432);
	v->a[35918] = 1;
	v->a[35919] = sym_case_item;
	small_parse_table_1796(v);
}

void	small_parse_table_1796(t_small_parse_table_array *v)
{
	v->a[35920] = state(1696);
	v->a[35921] = 1;
	v->a[35922] = sym__case_item_last;
	v->a[35923] = state(1594);
	v->a[35924] = 2;
	v->a[35925] = sym_concatenation;
	v->a[35926] = sym__extglob_blob;
	v->a[35927] = actions(1333);
	v->a[35928] = 3;
	v->a[35929] = sym_raw_string;
	v->a[35930] = sym_number;
	v->a[35931] = sym_word;
	v->a[35932] = actions(1339);
	v->a[35933] = 3;
	v->a[35934] = anon_sym_SEMI_SEMI;
	v->a[35935] = aux_sym_heredoc_redirect_token1;
	v->a[35936] = anon_sym_SEMI;
	v->a[35937] = state(1520);
	v->a[35938] = 5;
	v->a[35939] = sym_arithmetic_expansion;
	small_parse_table_1797(v);
}

void	small_parse_table_1797(t_small_parse_table_array *v)
{
	v->a[35940] = sym_string;
	v->a[35941] = sym_simple_expansion;
	v->a[35942] = sym_expansion;
	v->a[35943] = sym_command_substitution;
	v->a[35944] = 6;
	v->a[35945] = actions(3);
	v->a[35946] = 1;
	v->a[35947] = sym_comment;
	v->a[35948] = actions(1289);
	v->a[35949] = 1;
	v->a[35950] = sym_variable_name;
	v->a[35951] = actions(1355);
	v->a[35952] = 1;
	v->a[35953] = anon_sym_RPAREN;
	v->a[35954] = actions(1286);
	v->a[35955] = 7;
	v->a[35956] = anon_sym_LT;
	v->a[35957] = anon_sym_GT;
	v->a[35958] = anon_sym_GT_GT;
	v->a[35959] = anon_sym_LT_AMP;
	small_parse_table_1798(v);
}

void	small_parse_table_1798(t_small_parse_table_array *v)
{
	v->a[35960] = anon_sym_GT_AMP;
	v->a[35961] = anon_sym_GT_PIPE;
	v->a[35962] = anon_sym_LT_GT;
	v->a[35963] = actions(1281);
	v->a[35964] = 8;
	v->a[35965] = anon_sym_PIPE;
	v->a[35966] = anon_sym_SEMI_SEMI;
	v->a[35967] = anon_sym_AMP_AMP;
	v->a[35968] = anon_sym_PIPE_PIPE;
	v->a[35969] = anon_sym_LT_LT;
	v->a[35970] = anon_sym_LT_LT_DASH;
	v->a[35971] = aux_sym_heredoc_redirect_token1;
	v->a[35972] = anon_sym_SEMI;
	v->a[35973] = actions(1279);
	v->a[35974] = 9;
	v->a[35975] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35976] = anon_sym_DOLLAR;
	v->a[35977] = anon_sym_DQUOTE;
	v->a[35978] = sym_raw_string;
	v->a[35979] = sym_number;
	small_parse_table_1799(v);
}

void	small_parse_table_1799(t_small_parse_table_array *v)
{
	v->a[35980] = anon_sym_DOLLAR_LBRACE;
	v->a[35981] = anon_sym_DOLLAR_LPAREN;
	v->a[35982] = anon_sym_BQUOTE;
	v->a[35983] = sym_word;
	v->a[35984] = 3;
	v->a[35985] = actions(3);
	v->a[35986] = 1;
	v->a[35987] = sym_comment;
	v->a[35988] = actions(1111);
	v->a[35989] = 1;
	v->a[35990] = sym_variable_name;
	v->a[35991] = actions(1109);
	v->a[35992] = 25;
	v->a[35993] = anon_sym_for;
	v->a[35994] = anon_sym_while;
	v->a[35995] = anon_sym_until;
	v->a[35996] = anon_sym_if;
	v->a[35997] = anon_sym_fi;
	v->a[35998] = anon_sym_case;
	v->a[35999] = anon_sym_LPAREN;
	small_parse_table_1800(v);
}

/* EOF small_parse_table_359.c */
