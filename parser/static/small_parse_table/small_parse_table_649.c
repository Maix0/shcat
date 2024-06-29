/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_649.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3245(t_small_parse_table_array *v)
{
	v->a[64900] = sym_file_redirect;
	v->a[64901] = sym_heredoc_redirect;
	v->a[64902] = aux_sym_redirected_statement_repeat1;
	v->a[64903] = actions(2068);
	v->a[64904] = 7;
	v->a[64905] = anon_sym_esac;
	v->a[64906] = anon_sym_PIPE;
	v->a[64907] = anon_sym_SEMI_SEMI;
	v->a[64908] = anon_sym_AMP_AMP;
	v->a[64909] = anon_sym_PIPE_PIPE;
	v->a[64910] = anon_sym_AMP;
	v->a[64911] = anon_sym_SEMI;
	v->a[64912] = actions(2070);
	v->a[64913] = 8;
	v->a[64914] = anon_sym_LT;
	v->a[64915] = anon_sym_GT;
	v->a[64916] = anon_sym_GT_GT;
	v->a[64917] = anon_sym_AMP_GT;
	v->a[64918] = anon_sym_AMP_GT_GT;
	v->a[64919] = anon_sym_LT_AMP;
	small_parse_table_3246(v);
}

void	small_parse_table_3246(t_small_parse_table_array *v)
{
	v->a[64920] = anon_sym_GT_AMP;
	v->a[64921] = anon_sym_GT_PIPE;
	v->a[64922] = 5;
	v->a[64923] = actions(3);
	v->a[64924] = 1;
	v->a[64925] = sym_comment;
	v->a[64926] = actions(2084);
	v->a[64927] = 1;
	v->a[64928] = sym_variable_name;
	v->a[64929] = actions(2057);
	v->a[64930] = 2;
	v->a[64931] = sym_file_descriptor;
	v->a[64932] = aux_sym_heredoc_redirect_token1;
	v->a[64933] = state(1099);
	v->a[64934] = 2;
	v->a[64935] = sym_variable_assignment;
	v->a[64936] = aux_sym__variable_assignments_repeat1;
	v->a[64937] = actions(2055);
	v->a[64938] = 19;
	v->a[64939] = anon_sym_esac;
	small_parse_table_3247(v);
}

void	small_parse_table_3247(t_small_parse_table_array *v)
{
	v->a[64940] = anon_sym_PIPE;
	v->a[64941] = anon_sym_SEMI_SEMI;
	v->a[64942] = anon_sym_AMP_AMP;
	v->a[64943] = anon_sym_PIPE_PIPE;
	v->a[64944] = anon_sym_LT;
	v->a[64945] = anon_sym_GT;
	v->a[64946] = anon_sym_GT_GT;
	v->a[64947] = anon_sym_AMP_GT;
	v->a[64948] = anon_sym_AMP_GT_GT;
	v->a[64949] = anon_sym_LT_AMP;
	v->a[64950] = anon_sym_GT_AMP;
	v->a[64951] = anon_sym_GT_PIPE;
	v->a[64952] = anon_sym_LT_AMP_DASH;
	v->a[64953] = anon_sym_GT_AMP_DASH;
	v->a[64954] = anon_sym_LT_LT;
	v->a[64955] = anon_sym_LT_LT_DASH;
	v->a[64956] = anon_sym_AMP;
	v->a[64957] = anon_sym_SEMI;
	v->a[64958] = 8;
	v->a[64959] = actions(3);
	small_parse_table_3248(v);
}

void	small_parse_table_3248(t_small_parse_table_array *v)
{
	v->a[64960] = 1;
	v->a[64961] = sym_comment;
	v->a[64962] = actions(2095);
	v->a[64963] = 1;
	v->a[64964] = sym_file_descriptor;
	v->a[64965] = actions(2098);
	v->a[64966] = 1;
	v->a[64967] = sym_variable_name;
	v->a[64968] = state(1343);
	v->a[64969] = 1;
	v->a[64970] = sym_file_redirect;
	v->a[64971] = actions(2092);
	v->a[64972] = 2;
	v->a[64973] = anon_sym_LT_AMP_DASH;
	v->a[64974] = anon_sym_GT_AMP_DASH;
	v->a[64975] = state(1100);
	v->a[64976] = 2;
	v->a[64977] = sym_variable_assignment;
	v->a[64978] = aux_sym_command_repeat1;
	v->a[64979] = actions(2089);
	small_parse_table_3249(v);
}

void	small_parse_table_3249(t_small_parse_table_array *v)
{
	v->a[64980] = 8;
	v->a[64981] = anon_sym_LT;
	v->a[64982] = anon_sym_GT;
	v->a[64983] = anon_sym_GT_GT;
	v->a[64984] = anon_sym_AMP_GT;
	v->a[64985] = anon_sym_AMP_GT_GT;
	v->a[64986] = anon_sym_LT_AMP;
	v->a[64987] = anon_sym_GT_AMP;
	v->a[64988] = anon_sym_GT_PIPE;
	v->a[64989] = actions(2087);
	v->a[64990] = 9;
	v->a[64991] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64992] = anon_sym_DOLLAR;
	v->a[64993] = anon_sym_DQUOTE;
	v->a[64994] = sym_raw_string;
	v->a[64995] = sym_number;
	v->a[64996] = anon_sym_DOLLAR_LBRACE;
	v->a[64997] = anon_sym_DOLLAR_LPAREN;
	v->a[64998] = anon_sym_BQUOTE;
	v->a[64999] = sym_word;
	small_parse_table_3250(v);
}

/* EOF small_parse_table_649.c */
