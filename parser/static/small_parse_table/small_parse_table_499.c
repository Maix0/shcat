/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_499.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2495(t_small_parse_table_array *v)
{
	v->a[49900] = anon_sym_LT_AMP_DASH;
	v->a[49901] = anon_sym_GT_AMP_DASH;
	v->a[49902] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49903] = anon_sym_DOLLAR;
	v->a[49904] = anon_sym_DQUOTE;
	v->a[49905] = sym_raw_string;
	v->a[49906] = sym_number;
	v->a[49907] = anon_sym_DOLLAR_LBRACE;
	v->a[49908] = anon_sym_DOLLAR_LPAREN;
	v->a[49909] = anon_sym_BQUOTE;
	v->a[49910] = sym_word;
	v->a[49911] = 4;
	v->a[49912] = actions(3);
	v->a[49913] = 1;
	v->a[49914] = sym_comment;
	v->a[49915] = actions(1686);
	v->a[49916] = 1;
	v->a[49917] = ts_builtin_sym_end;
	v->a[49918] = actions(1577);
	v->a[49919] = 2;
	small_parse_table_2496(v);
}

void	small_parse_table_2496(t_small_parse_table_array *v)
{
	v->a[49920] = sym_file_descriptor;
	v->a[49921] = sym_variable_name;
	v->a[49922] = actions(1573);
	v->a[49923] = 25;
	v->a[49924] = anon_sym_for;
	v->a[49925] = anon_sym_while;
	v->a[49926] = anon_sym_until;
	v->a[49927] = anon_sym_if;
	v->a[49928] = anon_sym_case;
	v->a[49929] = anon_sym_LPAREN;
	v->a[49930] = anon_sym_LBRACE;
	v->a[49931] = anon_sym_BANG;
	v->a[49932] = anon_sym_LT;
	v->a[49933] = anon_sym_GT;
	v->a[49934] = anon_sym_GT_GT;
	v->a[49935] = anon_sym_LT_AMP;
	v->a[49936] = anon_sym_GT_AMP;
	v->a[49937] = anon_sym_GT_PIPE;
	v->a[49938] = anon_sym_LT_AMP_DASH;
	v->a[49939] = anon_sym_GT_AMP_DASH;
	small_parse_table_2497(v);
}

void	small_parse_table_2497(t_small_parse_table_array *v)
{
	v->a[49940] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49941] = anon_sym_DOLLAR;
	v->a[49942] = anon_sym_DQUOTE;
	v->a[49943] = sym_raw_string;
	v->a[49944] = sym_number;
	v->a[49945] = anon_sym_DOLLAR_LBRACE;
	v->a[49946] = anon_sym_DOLLAR_LPAREN;
	v->a[49947] = anon_sym_BQUOTE;
	v->a[49948] = sym_word;
	v->a[49949] = 12;
	v->a[49950] = actions(3);
	v->a[49951] = 1;
	v->a[49952] = sym_comment;
	v->a[49953] = actions(602);
	v->a[49954] = 1;
	v->a[49955] = sym_file_descriptor;
	v->a[49956] = actions(1690);
	v->a[49957] = 1;
	v->a[49958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49959] = actions(1692);
	small_parse_table_2498(v);
}

void	small_parse_table_2498(t_small_parse_table_array *v)
{
	v->a[49960] = 1;
	v->a[49961] = anon_sym_DOLLAR;
	v->a[49962] = actions(1694);
	v->a[49963] = 1;
	v->a[49964] = anon_sym_DQUOTE;
	v->a[49965] = actions(1696);
	v->a[49966] = 1;
	v->a[49967] = anon_sym_DOLLAR_LBRACE;
	v->a[49968] = actions(1698);
	v->a[49969] = 1;
	v->a[49970] = anon_sym_DOLLAR_LPAREN;
	v->a[49971] = actions(1700);
	v->a[49972] = 1;
	v->a[49973] = anon_sym_BQUOTE;
	v->a[49974] = state(793);
	v->a[49975] = 2;
	v->a[49976] = sym_concatenation;
	v->a[49977] = aux_sym_for_statement_repeat1;
	v->a[49978] = actions(1688);
	v->a[49979] = 3;
	small_parse_table_2499(v);
}

void	small_parse_table_2499(t_small_parse_table_array *v)
{
	v->a[49980] = sym_raw_string;
	v->a[49981] = sym_number;
	v->a[49982] = sym_word;
	v->a[49983] = state(1003);
	v->a[49984] = 5;
	v->a[49985] = sym_arithmetic_expansion;
	v->a[49986] = sym_string;
	v->a[49987] = sym_simple_expansion;
	v->a[49988] = sym_expansion;
	v->a[49989] = sym_command_substitution;
	v->a[49990] = actions(604);
	v->a[49991] = 11;
	v->a[49992] = anon_sym_AMP_AMP;
	v->a[49993] = anon_sym_PIPE_PIPE;
	v->a[49994] = anon_sym_LT;
	v->a[49995] = anon_sym_GT;
	v->a[49996] = anon_sym_GT_GT;
	v->a[49997] = anon_sym_LT_AMP;
	v->a[49998] = anon_sym_GT_AMP;
	v->a[49999] = anon_sym_GT_PIPE;
	small_parse_table_2500(v);
}

/* EOF small_parse_table_499.c */
