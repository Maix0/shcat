/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2469.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12345(t_small_parse_table_array *v)
{
	v->a[246900] = anon_sym_PIPE_AMP;
	v->a[246901] = actions(4692);
	v->a[246902] = 2;
	v->a[246903] = anon_sym_LT_LT;
	v->a[246904] = anon_sym_LT_LT_DASH;
	v->a[246905] = actions(5355);
	v->a[246906] = 2;
	v->a[246907] = anon_sym_PIPE_PIPE;
	v->a[246908] = anon_sym_AMP_AMP;
	v->a[246909] = actions(11487);
	v->a[246910] = 2;
	v->a[246911] = anon_sym_LT_AMP_DASH;
	v->a[246912] = anon_sym_GT_AMP_DASH;
	v->a[246913] = actions(5353);
	v->a[246914] = 3;
	v->a[246915] = anon_sym_SEMI;
	v->a[246916] = anon_sym_AMP;
	v->a[246917] = anon_sym_SEMI_SEMI;
	v->a[246918] = state(4697);
	v->a[246919] = 3;
	small_parse_table_12346(v);
}

void	small_parse_table_12346(t_small_parse_table_array *v)
{
	v->a[246920] = sym_file_redirect;
	v->a[246921] = sym_heredoc_redirect;
	v->a[246922] = aux_sym_redirected_statement_repeat1;
	v->a[246923] = actions(11485);
	v->a[246924] = 8;
	v->a[246925] = anon_sym_LT;
	v->a[246926] = anon_sym_GT;
	v->a[246927] = anon_sym_GT_GT;
	v->a[246928] = anon_sym_AMP_GT;
	v->a[246929] = anon_sym_AMP_GT_GT;
	v->a[246930] = anon_sym_LT_AMP;
	v->a[246931] = anon_sym_GT_AMP;
	v->a[246932] = anon_sym_GT_PIPE;
	v->a[246933] = 3;
	v->a[246934] = actions(3);
	v->a[246935] = 1;
	v->a[246936] = sym_comment;
	v->a[246937] = actions(1326);
	v->a[246938] = 5;
	v->a[246939] = sym_file_descriptor;
	small_parse_table_12347(v);
}

void	small_parse_table_12347(t_small_parse_table_array *v)
{
	v->a[246940] = sym__concat;
	v->a[246941] = sym_variable_name;
	v->a[246942] = ts_builtin_sym_end;
	v->a[246943] = aux_sym_heredoc_redirect_token1;
	v->a[246944] = actions(1324);
	v->a[246945] = 22;
	v->a[246946] = anon_sym_SEMI;
	v->a[246947] = anon_sym_PIPE_PIPE;
	v->a[246948] = anon_sym_AMP_AMP;
	v->a[246949] = anon_sym_PIPE;
	v->a[246950] = anon_sym_AMP;
	v->a[246951] = anon_sym_LT;
	v->a[246952] = anon_sym_GT;
	v->a[246953] = anon_sym_LT_LT;
	v->a[246954] = anon_sym_GT_GT;
	v->a[246955] = anon_sym_RPAREN;
	v->a[246956] = anon_sym_SEMI_SEMI;
	v->a[246957] = anon_sym_PIPE_AMP;
	v->a[246958] = anon_sym_AMP_GT;
	v->a[246959] = anon_sym_AMP_GT_GT;
	small_parse_table_12348(v);
}

void	small_parse_table_12348(t_small_parse_table_array *v)
{
	v->a[246960] = anon_sym_LT_AMP;
	v->a[246961] = anon_sym_GT_AMP;
	v->a[246962] = anon_sym_GT_PIPE;
	v->a[246963] = anon_sym_LT_AMP_DASH;
	v->a[246964] = anon_sym_GT_AMP_DASH;
	v->a[246965] = anon_sym_LT_LT_DASH;
	v->a[246966] = aux_sym_concatenation_token1;
	v->a[246967] = anon_sym_BQUOTE;
	v->a[246968] = 3;
	v->a[246969] = actions(3);
	v->a[246970] = 1;
	v->a[246971] = sym_comment;
	v->a[246972] = actions(1318);
	v->a[246973] = 3;
	v->a[246974] = sym_file_descriptor;
	v->a[246975] = sym__concat;
	v->a[246976] = aux_sym_heredoc_redirect_token1;
	v->a[246977] = actions(1316);
	v->a[246978] = 24;
	v->a[246979] = anon_sym_SEMI;
	small_parse_table_12349(v);
}

void	small_parse_table_12349(t_small_parse_table_array *v)
{
	v->a[246980] = anon_sym_PIPE_PIPE;
	v->a[246981] = anon_sym_AMP_AMP;
	v->a[246982] = anon_sym_PIPE;
	v->a[246983] = anon_sym_AMP;
	v->a[246984] = anon_sym_LT;
	v->a[246985] = anon_sym_GT;
	v->a[246986] = anon_sym_LT_LT;
	v->a[246987] = anon_sym_GT_GT;
	v->a[246988] = anon_sym_esac;
	v->a[246989] = anon_sym_SEMI_SEMI;
	v->a[246990] = anon_sym_SEMI_AMP;
	v->a[246991] = anon_sym_SEMI_SEMI_AMP;
	v->a[246992] = anon_sym_PIPE_AMP;
	v->a[246993] = anon_sym_AMP_GT;
	v->a[246994] = anon_sym_AMP_GT_GT;
	v->a[246995] = anon_sym_LT_AMP;
	v->a[246996] = anon_sym_GT_AMP;
	v->a[246997] = anon_sym_GT_PIPE;
	v->a[246998] = anon_sym_LT_AMP_DASH;
	v->a[246999] = anon_sym_GT_AMP_DASH;
	small_parse_table_12350(v);
}

/* EOF small_parse_table_2469.c */
