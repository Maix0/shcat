/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_829.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4145(t_small_parse_table_array *v)
{
	v->a[82900] = anon_sym_AMP_GT_GT;
	v->a[82901] = anon_sym_LT_AMP;
	v->a[82902] = anon_sym_GT_AMP;
	v->a[82903] = anon_sym_GT_PIPE;
	v->a[82904] = anon_sym_LT_AMP_DASH;
	v->a[82905] = anon_sym_GT_AMP_DASH;
	v->a[82906] = aux_sym_concatenation_token1;
	v->a[82907] = 10;
	v->a[82908] = actions(3);
	v->a[82909] = 1;
	v->a[82910] = sym_comment;
	v->a[82911] = actions(2719);
	v->a[82912] = 1;
	v->a[82913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82914] = actions(2721);
	v->a[82915] = 1;
	v->a[82916] = anon_sym_DOLLAR;
	v->a[82917] = actions(2723);
	v->a[82918] = 1;
	v->a[82919] = anon_sym_DQUOTE;
	small_parse_table_4146(v);
}

void	small_parse_table_4146(t_small_parse_table_array *v)
{
	v->a[82920] = actions(2725);
	v->a[82921] = 1;
	v->a[82922] = anon_sym_DOLLAR_LBRACE;
	v->a[82923] = actions(2727);
	v->a[82924] = 1;
	v->a[82925] = anon_sym_DOLLAR_LPAREN;
	v->a[82926] = actions(2729);
	v->a[82927] = 1;
	v->a[82928] = anon_sym_BQUOTE;
	v->a[82929] = state(195);
	v->a[82930] = 2;
	v->a[82931] = sym_concatenation;
	v->a[82932] = aux_sym_for_statement_repeat1;
	v->a[82933] = actions(3149);
	v->a[82934] = 3;
	v->a[82935] = sym_raw_string;
	v->a[82936] = sym_number;
	v->a[82937] = sym_word;
	v->a[82938] = state(339);
	v->a[82939] = 5;
	small_parse_table_4147(v);
}

void	small_parse_table_4147(t_small_parse_table_array *v)
{
	v->a[82940] = sym_arithmetic_expansion;
	v->a[82941] = sym_string;
	v->a[82942] = sym_simple_expansion;
	v->a[82943] = sym_expansion;
	v->a[82944] = sym_command_substitution;
	v->a[82945] = 10;
	v->a[82946] = actions(3);
	v->a[82947] = 1;
	v->a[82948] = sym_comment;
	v->a[82949] = actions(2719);
	v->a[82950] = 1;
	v->a[82951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82952] = actions(2721);
	v->a[82953] = 1;
	v->a[82954] = anon_sym_DOLLAR;
	v->a[82955] = actions(2723);
	v->a[82956] = 1;
	v->a[82957] = anon_sym_DQUOTE;
	v->a[82958] = actions(2725);
	v->a[82959] = 1;
	small_parse_table_4148(v);
}

void	small_parse_table_4148(t_small_parse_table_array *v)
{
	v->a[82960] = anon_sym_DOLLAR_LBRACE;
	v->a[82961] = actions(2727);
	v->a[82962] = 1;
	v->a[82963] = anon_sym_DOLLAR_LPAREN;
	v->a[82964] = actions(2729);
	v->a[82965] = 1;
	v->a[82966] = anon_sym_BQUOTE;
	v->a[82967] = state(197);
	v->a[82968] = 2;
	v->a[82969] = sym_concatenation;
	v->a[82970] = aux_sym_for_statement_repeat1;
	v->a[82971] = actions(3149);
	v->a[82972] = 3;
	v->a[82973] = sym_raw_string;
	v->a[82974] = sym_number;
	v->a[82975] = sym_word;
	v->a[82976] = state(339);
	v->a[82977] = 5;
	v->a[82978] = sym_arithmetic_expansion;
	v->a[82979] = sym_string;
	small_parse_table_4149(v);
}

void	small_parse_table_4149(t_small_parse_table_array *v)
{
	v->a[82980] = sym_simple_expansion;
	v->a[82981] = sym_expansion;
	v->a[82982] = sym_command_substitution;
	v->a[82983] = 10;
	v->a[82984] = actions(3);
	v->a[82985] = 1;
	v->a[82986] = sym_comment;
	v->a[82987] = actions(859);
	v->a[82988] = 1;
	v->a[82989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82990] = actions(861);
	v->a[82991] = 1;
	v->a[82992] = anon_sym_DOLLAR;
	v->a[82993] = actions(863);
	v->a[82994] = 1;
	v->a[82995] = anon_sym_DQUOTE;
	v->a[82996] = actions(865);
	v->a[82997] = 1;
	v->a[82998] = anon_sym_DOLLAR_LBRACE;
	v->a[82999] = actions(867);
	small_parse_table_4150(v);
}

/* EOF small_parse_table_829.c */
