/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_589.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2945(t_small_parse_table_array *v)
{
	v->a[58900] = anon_sym_BANG;
	v->a[58901] = anon_sym_LT;
	v->a[58902] = anon_sym_GT;
	v->a[58903] = anon_sym_GT_GT;
	v->a[58904] = anon_sym_AMP_GT;
	v->a[58905] = anon_sym_AMP_GT_GT;
	v->a[58906] = anon_sym_LT_AMP;
	v->a[58907] = anon_sym_GT_AMP;
	v->a[58908] = anon_sym_GT_PIPE;
	v->a[58909] = anon_sym_LT_AMP_DASH;
	v->a[58910] = anon_sym_GT_AMP_DASH;
	v->a[58911] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58912] = anon_sym_DOLLAR;
	v->a[58913] = anon_sym_DQUOTE;
	v->a[58914] = sym_raw_string;
	v->a[58915] = sym_number;
	v->a[58916] = anon_sym_DOLLAR_LBRACE;
	v->a[58917] = anon_sym_DOLLAR_LPAREN;
	v->a[58918] = sym_word;
	v->a[58919] = 6;
	small_parse_table_2946(v);
}

void	small_parse_table_2946(t_small_parse_table_array *v)
{
	v->a[58920] = actions(3);
	v->a[58921] = 1;
	v->a[58922] = sym_comment;
	v->a[58923] = actions(379);
	v->a[58924] = 1;
	v->a[58925] = sym_file_descriptor;
	v->a[58926] = actions(1342);
	v->a[58927] = 1;
	v->a[58928] = sym_variable_name;
	v->a[58929] = actions(1340);
	v->a[58930] = 2;
	v->a[58931] = aux_sym__simple_variable_name_token1;
	v->a[58932] = aux_sym__multiline_variable_name_token1;
	v->a[58933] = actions(1338);
	v->a[58934] = 9;
	v->a[58935] = anon_sym_BANG;
	v->a[58936] = anon_sym_DASH;
	v->a[58937] = anon_sym_STAR;
	v->a[58938] = anon_sym_QMARK;
	v->a[58939] = anon_sym_DOLLAR;
	small_parse_table_2947(v);
}

void	small_parse_table_2947(t_small_parse_table_array *v)
{
	v->a[58940] = anon_sym_POUND;
	v->a[58941] = anon_sym_AT;
	v->a[58942] = anon_sym_0;
	v->a[58943] = anon_sym__;
	v->a[58944] = actions(381);
	v->a[58945] = 16;
	v->a[58946] = anon_sym_PIPE;
	v->a[58947] = anon_sym_AMP_AMP;
	v->a[58948] = anon_sym_PIPE_PIPE;
	v->a[58949] = anon_sym_LT;
	v->a[58950] = anon_sym_GT;
	v->a[58951] = anon_sym_GT_GT;
	v->a[58952] = anon_sym_AMP_GT;
	v->a[58953] = anon_sym_AMP_GT_GT;
	v->a[58954] = anon_sym_LT_AMP;
	v->a[58955] = anon_sym_GT_AMP;
	v->a[58956] = anon_sym_GT_PIPE;
	v->a[58957] = anon_sym_LT_AMP_DASH;
	v->a[58958] = anon_sym_GT_AMP_DASH;
	v->a[58959] = anon_sym_LT_LT;
	small_parse_table_2948(v);
}

void	small_parse_table_2948(t_small_parse_table_array *v)
{
	v->a[58960] = anon_sym_LT_LT_DASH;
	v->a[58961] = aux_sym_heredoc_redirect_token1;
	v->a[58962] = 4;
	v->a[58963] = actions(3);
	v->a[58964] = 1;
	v->a[58965] = sym_comment;
	v->a[58966] = actions(1554);
	v->a[58967] = 1;
	v->a[58968] = anon_sym_BQUOTE;
	v->a[58969] = actions(1556);
	v->a[58970] = 2;
	v->a[58971] = sym_file_descriptor;
	v->a[58972] = sym_variable_name;
	v->a[58973] = actions(1552);
	v->a[58974] = 26;
	v->a[58975] = anon_sym_for;
	v->a[58976] = anon_sym_while;
	v->a[58977] = anon_sym_until;
	v->a[58978] = anon_sym_if;
	v->a[58979] = anon_sym_case;
	small_parse_table_2949(v);
}

void	small_parse_table_2949(t_small_parse_table_array *v)
{
	v->a[58980] = anon_sym_LPAREN;
	v->a[58981] = anon_sym_LBRACE;
	v->a[58982] = anon_sym_BANG;
	v->a[58983] = anon_sym_LT;
	v->a[58984] = anon_sym_GT;
	v->a[58985] = anon_sym_GT_GT;
	v->a[58986] = anon_sym_AMP_GT;
	v->a[58987] = anon_sym_AMP_GT_GT;
	v->a[58988] = anon_sym_LT_AMP;
	v->a[58989] = anon_sym_GT_AMP;
	v->a[58990] = anon_sym_GT_PIPE;
	v->a[58991] = anon_sym_LT_AMP_DASH;
	v->a[58992] = anon_sym_GT_AMP_DASH;
	v->a[58993] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58994] = anon_sym_DOLLAR;
	v->a[58995] = anon_sym_DQUOTE;
	v->a[58996] = sym_raw_string;
	v->a[58997] = sym_number;
	v->a[58998] = anon_sym_DOLLAR_LBRACE;
	v->a[58999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2950(v);
}

/* EOF small_parse_table_589.c */
