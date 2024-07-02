/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_539.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2695(t_small_parse_table_array *v)
{
	v->a[53900] = actions(1653);
	v->a[53901] = 1;
	v->a[53902] = sym_extglob_pattern;
	v->a[53903] = actions(1685);
	v->a[53904] = 1;
	v->a[53905] = anon_sym_esac;
	v->a[53906] = state(1021);
	v->a[53907] = 1;
	v->a[53908] = aux_sym_case_statement_repeat1;
	v->a[53909] = state(1713);
	v->a[53910] = 1;
	v->a[53911] = sym_case_item;
	v->a[53912] = state(2135);
	v->a[53913] = 1;
	v->a[53914] = sym__case_item_last;
	v->a[53915] = state(1873);
	v->a[53916] = 2;
	v->a[53917] = sym_concatenation;
	v->a[53918] = sym__extglob_blob;
	v->a[53919] = actions(1633);
	small_parse_table_2696(v);
}

void	small_parse_table_2696(t_small_parse_table_array *v)
{
	v->a[53920] = 3;
	v->a[53921] = sym_raw_string;
	v->a[53922] = sym_number;
	v->a[53923] = sym_word;
	v->a[53924] = state(1806);
	v->a[53925] = 5;
	v->a[53926] = sym_arithmetic_expansion;
	v->a[53927] = sym_string;
	v->a[53928] = sym_simple_expansion;
	v->a[53929] = sym_expansion;
	v->a[53930] = sym_command_substitution;
	v->a[53931] = 11;
	v->a[53932] = actions(3);
	v->a[53933] = 1;
	v->a[53934] = sym_comment;
	v->a[53935] = actions(692);
	v->a[53936] = 1;
	v->a[53937] = anon_sym_PIPE;
	v->a[53938] = actions(862);
	v->a[53939] = 1;
	small_parse_table_2697(v);
}

void	small_parse_table_2697(t_small_parse_table_array *v)
{
	v->a[53940] = ts_builtin_sym_end;
	v->a[53941] = actions(1863);
	v->a[53942] = 1;
	v->a[53943] = aux_sym_heredoc_redirect_token1;
	v->a[53944] = actions(1865);
	v->a[53945] = 1;
	v->a[53946] = sym_file_descriptor;
	v->a[53947] = state(742);
	v->a[53948] = 1;
	v->a[53949] = sym_terminator;
	v->a[53950] = actions(700);
	v->a[53951] = 2;
	v->a[53952] = anon_sym_LT_LT;
	v->a[53953] = anon_sym_LT_LT_DASH;
	v->a[53954] = actions(719);
	v->a[53955] = 2;
	v->a[53956] = anon_sym_AMP_AMP;
	v->a[53957] = anon_sym_PIPE_PIPE;
	v->a[53958] = actions(717);
	v->a[53959] = 3;
	small_parse_table_2698(v);
}

void	small_parse_table_2698(t_small_parse_table_array *v)
{
	v->a[53960] = anon_sym_SEMI_SEMI;
	v->a[53961] = anon_sym_AMP;
	v->a[53962] = anon_sym_SEMI;
	v->a[53963] = state(1086);
	v->a[53964] = 3;
	v->a[53965] = sym_file_redirect;
	v->a[53966] = sym_heredoc_redirect;
	v->a[53967] = aux_sym_redirected_statement_repeat1;
	v->a[53968] = actions(1861);
	v->a[53969] = 7;
	v->a[53970] = anon_sym_LT;
	v->a[53971] = anon_sym_GT;
	v->a[53972] = anon_sym_GT_GT;
	v->a[53973] = anon_sym_LT_AMP;
	v->a[53974] = anon_sym_GT_AMP;
	v->a[53975] = anon_sym_GT_PIPE;
	v->a[53976] = anon_sym_LT_GT;
	v->a[53977] = 11;
	v->a[53978] = actions(3);
	v->a[53979] = 1;
	small_parse_table_2699(v);
}

void	small_parse_table_2699(t_small_parse_table_array *v)
{
	v->a[53980] = sym_comment;
	v->a[53981] = actions(692);
	v->a[53982] = 1;
	v->a[53983] = anon_sym_PIPE;
	v->a[53984] = actions(862);
	v->a[53985] = 1;
	v->a[53986] = ts_builtin_sym_end;
	v->a[53987] = actions(1863);
	v->a[53988] = 1;
	v->a[53989] = aux_sym_heredoc_redirect_token1;
	v->a[53990] = actions(1865);
	v->a[53991] = 1;
	v->a[53992] = sym_file_descriptor;
	v->a[53993] = state(743);
	v->a[53994] = 1;
	v->a[53995] = sym_terminator;
	v->a[53996] = actions(700);
	v->a[53997] = 2;
	v->a[53998] = anon_sym_LT_LT;
	v->a[53999] = anon_sym_LT_LT_DASH;
	small_parse_table_2700(v);
}

/* EOF small_parse_table_539.c */
