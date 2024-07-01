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
	v->a[58900] = anon_sym_LT_AMP;
	v->a[58901] = anon_sym_GT_AMP;
	v->a[58902] = anon_sym_GT_PIPE;
	v->a[58903] = anon_sym_LT_GT;
	v->a[58904] = 15;
	v->a[58905] = actions(3);
	v->a[58906] = 1;
	v->a[58907] = sym_comment;
	v->a[58908] = actions(1634);
	v->a[58909] = 1;
	v->a[58910] = anon_sym_LPAREN;
	v->a[58911] = actions(1638);
	v->a[58912] = 1;
	v->a[58913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58914] = actions(1640);
	v->a[58915] = 1;
	v->a[58916] = anon_sym_DOLLAR;
	v->a[58917] = actions(1642);
	v->a[58918] = 1;
	v->a[58919] = anon_sym_DQUOTE;
	small_parse_table_2946(v);
}

void	small_parse_table_2946(t_small_parse_table_array *v)
{
	v->a[58920] = actions(1644);
	v->a[58921] = 1;
	v->a[58922] = anon_sym_DOLLAR_LBRACE;
	v->a[58923] = actions(1646);
	v->a[58924] = 1;
	v->a[58925] = anon_sym_DOLLAR_LPAREN;
	v->a[58926] = actions(1648);
	v->a[58927] = 1;
	v->a[58928] = anon_sym_BQUOTE;
	v->a[58929] = actions(1650);
	v->a[58930] = 1;
	v->a[58931] = sym_extglob_pattern;
	v->a[58932] = state(1139);
	v->a[58933] = 1;
	v->a[58934] = aux_sym_case_statement_repeat1;
	v->a[58935] = state(1713);
	v->a[58936] = 1;
	v->a[58937] = sym_case_item;
	v->a[58938] = state(2078);
	v->a[58939] = 1;
	small_parse_table_2947(v);
}

void	small_parse_table_2947(t_small_parse_table_array *v)
{
	v->a[58940] = sym__case_item_last;
	v->a[58941] = state(1871);
	v->a[58942] = 2;
	v->a[58943] = sym_concatenation;
	v->a[58944] = sym__extglob_blob;
	v->a[58945] = actions(1630);
	v->a[58946] = 3;
	v->a[58947] = sym_raw_string;
	v->a[58948] = sym_number;
	v->a[58949] = sym_word;
	v->a[58950] = state(1804);
	v->a[58951] = 5;
	v->a[58952] = sym_arithmetic_expansion;
	v->a[58953] = sym_string;
	v->a[58954] = sym_simple_expansion;
	v->a[58955] = sym_expansion;
	v->a[58956] = sym_command_substitution;
	v->a[58957] = 4;
	v->a[58958] = actions(3);
	v->a[58959] = 1;
	small_parse_table_2948(v);
}

void	small_parse_table_2948(t_small_parse_table_array *v)
{
	v->a[58960] = sym_comment;
	v->a[58961] = actions(997);
	v->a[58962] = 2;
	v->a[58963] = sym_file_descriptor;
	v->a[58964] = aux_sym_heredoc_redirect_token1;
	v->a[58965] = state(1059);
	v->a[58966] = 3;
	v->a[58967] = sym_file_redirect;
	v->a[58968] = sym_heredoc_redirect;
	v->a[58969] = aux_sym_redirected_statement_repeat1;
	v->a[58970] = actions(960);
	v->a[58971] = 16;
	v->a[58972] = anon_sym_PIPE;
	v->a[58973] = anon_sym_SEMI_SEMI;
	v->a[58974] = anon_sym_AMP_AMP;
	v->a[58975] = anon_sym_PIPE_PIPE;
	v->a[58976] = anon_sym_LT;
	v->a[58977] = anon_sym_GT;
	v->a[58978] = anon_sym_GT_GT;
	v->a[58979] = anon_sym_LT_AMP;
	small_parse_table_2949(v);
}

void	small_parse_table_2949(t_small_parse_table_array *v)
{
	v->a[58980] = anon_sym_GT_AMP;
	v->a[58981] = anon_sym_GT_PIPE;
	v->a[58982] = anon_sym_LT_GT;
	v->a[58983] = anon_sym_LT_LT;
	v->a[58984] = anon_sym_LT_LT_DASH;
	v->a[58985] = anon_sym_AMP;
	v->a[58986] = anon_sym_BQUOTE;
	v->a[58987] = anon_sym_SEMI;
	v->a[58988] = 5;
	v->a[58989] = actions(3);
	v->a[58990] = 1;
	v->a[58991] = sym_comment;
	v->a[58992] = actions(736);
	v->a[58993] = 1;
	v->a[58994] = anon_sym_PIPE;
	v->a[58995] = actions(997);
	v->a[58996] = 2;
	v->a[58997] = sym_file_descriptor;
	v->a[58998] = aux_sym_heredoc_redirect_token1;
	v->a[58999] = state(1059);
	small_parse_table_2950(v);
}

/* EOF small_parse_table_589.c */
