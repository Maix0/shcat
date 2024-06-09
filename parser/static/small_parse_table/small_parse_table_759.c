/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_759.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3795(t_small_parse_table_array *v)
{
	v->a[75900] = 2;
	v->a[75901] = sym_raw_string;
	v->a[75902] = sym_word;
	v->a[75903] = state(995);
	v->a[75904] = 6;
	v->a[75905] = sym_arithmetic_expansion;
	v->a[75906] = sym_string;
	v->a[75907] = sym_number;
	v->a[75908] = sym_simple_expansion;
	v->a[75909] = sym_expansion;
	v->a[75910] = sym_command_substitution;
	v->a[75911] = 14;
	v->a[75912] = actions(3);
	v->a[75913] = 1;
	v->a[75914] = sym_comment;
	v->a[75915] = actions(2873);
	v->a[75916] = 1;
	v->a[75917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75918] = actions(2875);
	v->a[75919] = 1;
	small_parse_table_3796(v);
}

void	small_parse_table_3796(t_small_parse_table_array *v)
{
	v->a[75920] = anon_sym_DOLLAR;
	v->a[75921] = actions(2877);
	v->a[75922] = 1;
	v->a[75923] = anon_sym_DQUOTE;
	v->a[75924] = actions(2879);
	v->a[75925] = 1;
	v->a[75926] = aux_sym_number_token1;
	v->a[75927] = actions(2881);
	v->a[75928] = 1;
	v->a[75929] = aux_sym_number_token2;
	v->a[75930] = actions(2883);
	v->a[75931] = 1;
	v->a[75932] = anon_sym_DOLLAR_LBRACE;
	v->a[75933] = actions(2885);
	v->a[75934] = 1;
	v->a[75935] = anon_sym_DOLLAR_LPAREN;
	v->a[75936] = actions(2887);
	v->a[75937] = 1;
	v->a[75938] = anon_sym_BQUOTE;
	v->a[75939] = actions(2889);
	small_parse_table_3797(v);
}

void	small_parse_table_3797(t_small_parse_table_array *v)
{
	v->a[75940] = 1;
	v->a[75941] = sym__comment_word;
	v->a[75942] = actions(2891);
	v->a[75943] = 1;
	v->a[75944] = sym__empty_value;
	v->a[75945] = state(1049);
	v->a[75946] = 1;
	v->a[75947] = sym_concatenation;
	v->a[75948] = actions(3062);
	v->a[75949] = 2;
	v->a[75950] = sym_raw_string;
	v->a[75951] = sym_word;
	v->a[75952] = state(1263);
	v->a[75953] = 6;
	v->a[75954] = sym_arithmetic_expansion;
	v->a[75955] = sym_string;
	v->a[75956] = sym_number;
	v->a[75957] = sym_simple_expansion;
	v->a[75958] = sym_expansion;
	v->a[75959] = sym_command_substitution;
	small_parse_table_3798(v);
}

void	small_parse_table_3798(t_small_parse_table_array *v)
{
	v->a[75960] = 5;
	v->a[75961] = actions(1404);
	v->a[75962] = 1;
	v->a[75963] = sym_comment;
	v->a[75964] = state(1361);
	v->a[75965] = 1;
	v->a[75966] = aux_sym_concatenation_repeat1;
	v->a[75967] = actions(3064);
	v->a[75968] = 2;
	v->a[75969] = sym__concat;
	v->a[75970] = aux_sym_concatenation_token1;
	v->a[75971] = actions(1114);
	v->a[75972] = 7;
	v->a[75973] = anon_sym_PIPE;
	v->a[75974] = anon_sym_LT;
	v->a[75975] = anon_sym_GT;
	v->a[75976] = anon_sym_AMP_GT;
	v->a[75977] = anon_sym_LT_AMP;
	v->a[75978] = anon_sym_GT_AMP;
	v->a[75979] = anon_sym_LT_LT;
	small_parse_table_3799(v);
}

void	small_parse_table_3799(t_small_parse_table_array *v)
{
	v->a[75980] = actions(1112);
	v->a[75981] = 9;
	v->a[75982] = sym_file_descriptor;
	v->a[75983] = anon_sym_AMP_AMP;
	v->a[75984] = anon_sym_PIPE_PIPE;
	v->a[75985] = anon_sym_GT_GT;
	v->a[75986] = anon_sym_AMP_GT_GT;
	v->a[75987] = anon_sym_GT_PIPE;
	v->a[75988] = anon_sym_LT_AMP_DASH;
	v->a[75989] = anon_sym_GT_AMP_DASH;
	v->a[75990] = anon_sym_LT_LT_DASH;
	v->a[75991] = 3;
	v->a[75992] = actions(1404);
	v->a[75993] = 1;
	v->a[75994] = sym_comment;
	v->a[75995] = actions(1196);
	v->a[75996] = 7;
	v->a[75997] = anon_sym_PIPE;
	v->a[75998] = anon_sym_LT;
	v->a[75999] = anon_sym_GT;
	small_parse_table_3800(v);
}

/* EOF small_parse_table_759.c */
