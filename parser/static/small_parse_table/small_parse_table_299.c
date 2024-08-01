/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_299.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1495(t_small_parse_table_array *v)
{
	v->a[29900] = anon_sym_case;
	v->a[29901] = anon_sym_LPAREN;
	v->a[29902] = anon_sym_LBRACE;
	v->a[29903] = anon_sym_BANG;
	v->a[29904] = anon_sym_LT;
	v->a[29905] = anon_sym_GT;
	v->a[29906] = anon_sym_GT_GT;
	v->a[29907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29908] = anon_sym_DOLLAR;
	v->a[29909] = anon_sym_DQUOTE;
	v->a[29910] = sym_raw_string;
	v->a[29911] = sym_number;
	v->a[29912] = anon_sym_DOLLAR_LBRACE;
	v->a[29913] = anon_sym_DOLLAR_LPAREN;
	v->a[29914] = anon_sym_BQUOTE;
	v->a[29915] = sym_word;
	v->a[29916] = 16;
	v->a[29917] = actions(3);
	v->a[29918] = 1;
	v->a[29919] = sym_comment;
	small_parse_table_1496(v);
}

void	small_parse_table_1496(t_small_parse_table_array *v)
{
	v->a[29920] = actions(778);
	v->a[29921] = 1;
	v->a[29922] = anon_sym_LPAREN;
	v->a[29923] = actions(782);
	v->a[29924] = 1;
	v->a[29925] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29926] = actions(784);
	v->a[29927] = 1;
	v->a[29928] = anon_sym_DOLLAR;
	v->a[29929] = actions(786);
	v->a[29930] = 1;
	v->a[29931] = anon_sym_DQUOTE;
	v->a[29932] = actions(788);
	v->a[29933] = 1;
	v->a[29934] = anon_sym_DOLLAR_LBRACE;
	v->a[29935] = actions(790);
	v->a[29936] = 1;
	v->a[29937] = anon_sym_DOLLAR_LPAREN;
	v->a[29938] = actions(792);
	v->a[29939] = 1;
	small_parse_table_1497(v);
}

void	small_parse_table_1497(t_small_parse_table_array *v)
{
	v->a[29940] = anon_sym_BQUOTE;
	v->a[29941] = actions(794);
	v->a[29942] = 1;
	v->a[29943] = sym_extglob_pattern;
	v->a[29944] = actions(814);
	v->a[29945] = 1;
	v->a[29946] = anon_sym_esac;
	v->a[29947] = state(571);
	v->a[29948] = 1;
	v->a[29949] = aux_sym_case_statement_repeat1;
	v->a[29950] = state(1232);
	v->a[29951] = 1;
	v->a[29952] = sym_case_item;
	v->a[29953] = state(1647);
	v->a[29954] = 1;
	v->a[29955] = sym__case_item_last;
	v->a[29956] = state(1538);
	v->a[29957] = 2;
	v->a[29958] = sym_concatenation;
	v->a[29959] = sym__extglob_blob;
	small_parse_table_1498(v);
}

void	small_parse_table_1498(t_small_parse_table_array *v)
{
	v->a[29960] = actions(774);
	v->a[29961] = 3;
	v->a[29962] = sym_raw_string;
	v->a[29963] = sym_number;
	v->a[29964] = sym_word;
	v->a[29965] = state(1468);
	v->a[29966] = 5;
	v->a[29967] = sym_arithmetic_expansion;
	v->a[29968] = sym_string;
	v->a[29969] = sym_simple_expansion;
	v->a[29970] = sym_expansion;
	v->a[29971] = sym_command_substitution;
	v->a[29972] = 16;
	v->a[29973] = actions(3);
	v->a[29974] = 1;
	v->a[29975] = sym_comment;
	v->a[29976] = actions(778);
	v->a[29977] = 1;
	v->a[29978] = anon_sym_LPAREN;
	v->a[29979] = actions(782);
	small_parse_table_1499(v);
}

void	small_parse_table_1499(t_small_parse_table_array *v)
{
	v->a[29980] = 1;
	v->a[29981] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29982] = actions(784);
	v->a[29983] = 1;
	v->a[29984] = anon_sym_DOLLAR;
	v->a[29985] = actions(786);
	v->a[29986] = 1;
	v->a[29987] = anon_sym_DQUOTE;
	v->a[29988] = actions(788);
	v->a[29989] = 1;
	v->a[29990] = anon_sym_DOLLAR_LBRACE;
	v->a[29991] = actions(790);
	v->a[29992] = 1;
	v->a[29993] = anon_sym_DOLLAR_LPAREN;
	v->a[29994] = actions(792);
	v->a[29995] = 1;
	v->a[29996] = anon_sym_BQUOTE;
	v->a[29997] = actions(794);
	v->a[29998] = 1;
	v->a[29999] = sym_extglob_pattern;
	small_parse_table_1500(v);
}

/* EOF small_parse_table_299.c */
