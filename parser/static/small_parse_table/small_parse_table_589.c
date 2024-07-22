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
	v->a[58900] = anon_sym_GT_GT;
	v->a[58901] = anon_sym_LT_AMP;
	v->a[58902] = anon_sym_GT_AMP;
	v->a[58903] = anon_sym_GT_PIPE;
	v->a[58904] = anon_sym_LT_GT;
	v->a[58905] = anon_sym_LT_LT;
	v->a[58906] = anon_sym_LT_LT_DASH;
	v->a[58907] = aux_sym_concatenation_token1;
	v->a[58908] = anon_sym_SEMI;
	v->a[58909] = 10;
	v->a[58910] = actions(3);
	v->a[58911] = 1;
	v->a[58912] = sym_comment;
	v->a[58913] = actions(950);
	v->a[58914] = 1;
	v->a[58915] = ts_builtin_sym_end;
	v->a[58916] = actions(1882);
	v->a[58917] = 1;
	v->a[58918] = aux_sym_heredoc_redirect_token1;
	v->a[58919] = actions(1884);
	small_parse_table_2946(v);
}

void	small_parse_table_2946(t_small_parse_table_array *v)
{
	v->a[58920] = 1;
	v->a[58921] = sym_file_descriptor;
	v->a[58922] = state(744);
	v->a[58923] = 1;
	v->a[58924] = sym_terminator;
	v->a[58925] = actions(790);
	v->a[58926] = 2;
	v->a[58927] = anon_sym_LT_LT;
	v->a[58928] = anon_sym_LT_LT_DASH;
	v->a[58929] = actions(808);
	v->a[58930] = 2;
	v->a[58931] = anon_sym_SEMI_SEMI;
	v->a[58932] = anon_sym_SEMI;
	v->a[58933] = actions(810);
	v->a[58934] = 2;
	v->a[58935] = anon_sym_AMP_AMP;
	v->a[58936] = anon_sym_PIPE_PIPE;
	v->a[58937] = state(1046);
	v->a[58938] = 3;
	v->a[58939] = sym_file_redirect;
	small_parse_table_2947(v);
}

void	small_parse_table_2947(t_small_parse_table_array *v)
{
	v->a[58940] = sym_heredoc_redirect;
	v->a[58941] = aux_sym_redirected_statement_repeat1;
	v->a[58942] = actions(1880);
	v->a[58943] = 7;
	v->a[58944] = anon_sym_LT;
	v->a[58945] = anon_sym_GT;
	v->a[58946] = anon_sym_GT_GT;
	v->a[58947] = anon_sym_LT_AMP;
	v->a[58948] = anon_sym_GT_AMP;
	v->a[58949] = anon_sym_GT_PIPE;
	v->a[58950] = anon_sym_LT_GT;
	v->a[58951] = 3;
	v->a[58952] = actions(3);
	v->a[58953] = 1;
	v->a[58954] = sym_comment;
	v->a[58955] = actions(1162);
	v->a[58956] = 4;
	v->a[58957] = sym_file_descriptor;
	v->a[58958] = sym__concat;
	v->a[58959] = sym_variable_name;
	small_parse_table_2948(v);
}

void	small_parse_table_2948(t_small_parse_table_array *v)
{
	v->a[58960] = aux_sym_heredoc_redirect_token1;
	v->a[58961] = actions(1160);
	v->a[58962] = 16;
	v->a[58963] = anon_sym_esac;
	v->a[58964] = anon_sym_PIPE;
	v->a[58965] = anon_sym_SEMI_SEMI;
	v->a[58966] = anon_sym_AMP_AMP;
	v->a[58967] = anon_sym_PIPE_PIPE;
	v->a[58968] = anon_sym_LT;
	v->a[58969] = anon_sym_GT;
	v->a[58970] = anon_sym_GT_GT;
	v->a[58971] = anon_sym_LT_AMP;
	v->a[58972] = anon_sym_GT_AMP;
	v->a[58973] = anon_sym_GT_PIPE;
	v->a[58974] = anon_sym_LT_GT;
	v->a[58975] = anon_sym_LT_LT;
	v->a[58976] = anon_sym_LT_LT_DASH;
	v->a[58977] = aux_sym_concatenation_token1;
	v->a[58978] = anon_sym_SEMI;
	v->a[58979] = 5;
	small_parse_table_2949(v);
}

void	small_parse_table_2949(t_small_parse_table_array *v)
{
	v->a[58980] = actions(3);
	v->a[58981] = 1;
	v->a[58982] = sym_comment;
	v->a[58983] = actions(1853);
	v->a[58984] = 1;
	v->a[58985] = sym_variable_name;
	v->a[58986] = actions(1851);
	v->a[58987] = 2;
	v->a[58988] = aux_sym__simple_variable_name_token1;
	v->a[58989] = aux_sym__multiline_variable_name_token1;
	v->a[58990] = actions(1849);
	v->a[58991] = 8;
	v->a[58992] = anon_sym_BANG;
	v->a[58993] = anon_sym_DASH;
	v->a[58994] = anon_sym_STAR;
	v->a[58995] = anon_sym_QMARK;
	v->a[58996] = anon_sym_DOLLAR;
	v->a[58997] = anon_sym_POUND;
	v->a[58998] = anon_sym_AT;
	v->a[58999] = anon_sym_0;
	small_parse_table_2950(v);
}

/* EOF small_parse_table_589.c */
