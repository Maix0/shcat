/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_729.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3645(t_small_parse_table_array *v)
{
	v->a[72900] = state(1311);
	v->a[72901] = 1;
	v->a[72902] = aux_sym_pipeline_repeat1;
	v->a[72903] = actions(2440);
	v->a[72904] = 2;
	v->a[72905] = sym_file_descriptor;
	v->a[72906] = aux_sym_heredoc_redirect_token1;
	v->a[72907] = actions(2444);
	v->a[72908] = 18;
	v->a[72909] = anon_sym_esac;
	v->a[72910] = anon_sym_SEMI_SEMI;
	v->a[72911] = anon_sym_AMP_AMP;
	v->a[72912] = anon_sym_PIPE_PIPE;
	v->a[72913] = anon_sym_LT;
	v->a[72914] = anon_sym_GT;
	v->a[72915] = anon_sym_GT_GT;
	v->a[72916] = anon_sym_AMP_GT;
	v->a[72917] = anon_sym_AMP_GT_GT;
	v->a[72918] = anon_sym_LT_AMP;
	v->a[72919] = anon_sym_GT_AMP;
	small_parse_table_3646(v);
}

void	small_parse_table_3646(t_small_parse_table_array *v)
{
	v->a[72920] = anon_sym_GT_PIPE;
	v->a[72921] = anon_sym_LT_AMP_DASH;
	v->a[72922] = anon_sym_GT_AMP_DASH;
	v->a[72923] = anon_sym_LT_LT;
	v->a[72924] = anon_sym_LT_LT_DASH;
	v->a[72925] = anon_sym_AMP;
	v->a[72926] = anon_sym_SEMI;
	v->a[72927] = 5;
	v->a[72928] = actions(3);
	v->a[72929] = 1;
	v->a[72930] = sym_comment;
	v->a[72931] = actions(2188);
	v->a[72932] = 1;
	v->a[72933] = anon_sym_PIPE;
	v->a[72934] = state(1512);
	v->a[72935] = 1;
	v->a[72936] = aux_sym_pipeline_repeat1;
	v->a[72937] = actions(2186);
	v->a[72938] = 2;
	v->a[72939] = sym_file_descriptor;
	small_parse_table_3647(v);
}

void	small_parse_table_3647(t_small_parse_table_array *v)
{
	v->a[72940] = aux_sym_heredoc_redirect_token1;
	v->a[72941] = actions(2191);
	v->a[72942] = 18;
	v->a[72943] = anon_sym_esac;
	v->a[72944] = anon_sym_SEMI_SEMI;
	v->a[72945] = anon_sym_AMP_AMP;
	v->a[72946] = anon_sym_PIPE_PIPE;
	v->a[72947] = anon_sym_LT;
	v->a[72948] = anon_sym_GT;
	v->a[72949] = anon_sym_GT_GT;
	v->a[72950] = anon_sym_AMP_GT;
	v->a[72951] = anon_sym_AMP_GT_GT;
	v->a[72952] = anon_sym_LT_AMP;
	v->a[72953] = anon_sym_GT_AMP;
	v->a[72954] = anon_sym_GT_PIPE;
	v->a[72955] = anon_sym_LT_AMP_DASH;
	v->a[72956] = anon_sym_GT_AMP_DASH;
	v->a[72957] = anon_sym_LT_LT;
	v->a[72958] = anon_sym_LT_LT_DASH;
	v->a[72959] = anon_sym_AMP;
	small_parse_table_3648(v);
}

void	small_parse_table_3648(t_small_parse_table_array *v)
{
	v->a[72960] = anon_sym_SEMI;
	v->a[72961] = 15;
	v->a[72962] = actions(3);
	v->a[72963] = 1;
	v->a[72964] = sym_comment;
	v->a[72965] = actions(1879);
	v->a[72966] = 1;
	v->a[72967] = anon_sym_LPAREN;
	v->a[72968] = actions(1883);
	v->a[72969] = 1;
	v->a[72970] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72971] = actions(1885);
	v->a[72972] = 1;
	v->a[72973] = anon_sym_DOLLAR;
	v->a[72974] = actions(1887);
	v->a[72975] = 1;
	v->a[72976] = anon_sym_DQUOTE;
	v->a[72977] = actions(1889);
	v->a[72978] = 1;
	v->a[72979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3649(v);
}

void	small_parse_table_3649(t_small_parse_table_array *v)
{
	v->a[72980] = actions(1891);
	v->a[72981] = 1;
	v->a[72982] = anon_sym_DOLLAR_LPAREN;
	v->a[72983] = actions(1893);
	v->a[72984] = 1;
	v->a[72985] = anon_sym_BQUOTE;
	v->a[72986] = actions(1895);
	v->a[72987] = 1;
	v->a[72988] = sym_extglob_pattern;
	v->a[72989] = state(1396);
	v->a[72990] = 1;
	v->a[72991] = aux_sym_case_statement_repeat1;
	v->a[72992] = state(1923);
	v->a[72993] = 1;
	v->a[72994] = sym_case_item;
	v->a[72995] = state(2218);
	v->a[72996] = 1;
	v->a[72997] = sym__case_item_last;
	v->a[72998] = state(2078);
	v->a[72999] = 2;
	small_parse_table_3650(v);
}

/* EOF small_parse_table_729.c */
