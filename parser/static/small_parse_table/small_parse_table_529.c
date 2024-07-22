/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_529.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2645(t_small_parse_table_array *v)
{
	v->a[52900] = 1;
	v->a[52901] = anon_sym_BQUOTE;
	v->a[52902] = actions(1736);
	v->a[52903] = 1;
	v->a[52904] = sym_extglob_pattern;
	v->a[52905] = actions(1855);
	v->a[52906] = 1;
	v->a[52907] = anon_sym_esac;
	v->a[52908] = state(1020);
	v->a[52909] = 1;
	v->a[52910] = aux_sym_case_statement_repeat1;
	v->a[52911] = state(1682);
	v->a[52912] = 1;
	v->a[52913] = sym_case_item;
	v->a[52914] = state(2083);
	v->a[52915] = 1;
	v->a[52916] = sym__case_item_last;
	v->a[52917] = state(1877);
	v->a[52918] = 2;
	v->a[52919] = sym_concatenation;
	small_parse_table_2646(v);
}

void	small_parse_table_2646(t_small_parse_table_array *v)
{
	v->a[52920] = sym__extglob_blob;
	v->a[52921] = actions(1716);
	v->a[52922] = 3;
	v->a[52923] = sym_raw_string;
	v->a[52924] = sym_number;
	v->a[52925] = sym_word;
	v->a[52926] = state(1772);
	v->a[52927] = 5;
	v->a[52928] = sym_arithmetic_expansion;
	v->a[52929] = sym_string;
	v->a[52930] = sym_simple_expansion;
	v->a[52931] = sym_expansion;
	v->a[52932] = sym_command_substitution;
	v->a[52933] = 3;
	v->a[52934] = actions(3);
	v->a[52935] = 1;
	v->a[52936] = sym_comment;
	v->a[52937] = actions(527);
	v->a[52938] = 5;
	v->a[52939] = sym_file_descriptor;
	small_parse_table_2647(v);
}

void	small_parse_table_2647(t_small_parse_table_array *v)
{
	v->a[52940] = sym__concat;
	v->a[52941] = sym_variable_name;
	v->a[52942] = ts_builtin_sym_end;
	v->a[52943] = aux_sym_heredoc_redirect_token1;
	v->a[52944] = actions(525);
	v->a[52945] = 17;
	v->a[52946] = anon_sym_PIPE;
	v->a[52947] = anon_sym_RPAREN;
	v->a[52948] = anon_sym_SEMI_SEMI;
	v->a[52949] = anon_sym_AMP_AMP;
	v->a[52950] = anon_sym_PIPE_PIPE;
	v->a[52951] = anon_sym_LT;
	v->a[52952] = anon_sym_GT;
	v->a[52953] = anon_sym_GT_GT;
	v->a[52954] = anon_sym_LT_AMP;
	v->a[52955] = anon_sym_GT_AMP;
	v->a[52956] = anon_sym_GT_PIPE;
	v->a[52957] = anon_sym_LT_GT;
	v->a[52958] = anon_sym_LT_LT;
	v->a[52959] = anon_sym_LT_LT_DASH;
	small_parse_table_2648(v);
}

void	small_parse_table_2648(t_small_parse_table_array *v)
{
	v->a[52960] = aux_sym_concatenation_token1;
	v->a[52961] = anon_sym_BQUOTE;
	v->a[52962] = anon_sym_SEMI;
	v->a[52963] = 3;
	v->a[52964] = actions(3);
	v->a[52965] = 1;
	v->a[52966] = sym_comment;
	v->a[52967] = actions(523);
	v->a[52968] = 5;
	v->a[52969] = sym_file_descriptor;
	v->a[52970] = sym__concat;
	v->a[52971] = sym_variable_name;
	v->a[52972] = ts_builtin_sym_end;
	v->a[52973] = aux_sym_heredoc_redirect_token1;
	v->a[52974] = actions(521);
	v->a[52975] = 17;
	v->a[52976] = anon_sym_PIPE;
	v->a[52977] = anon_sym_RPAREN;
	v->a[52978] = anon_sym_SEMI_SEMI;
	v->a[52979] = anon_sym_AMP_AMP;
	small_parse_table_2649(v);
}

void	small_parse_table_2649(t_small_parse_table_array *v)
{
	v->a[52980] = anon_sym_PIPE_PIPE;
	v->a[52981] = anon_sym_LT;
	v->a[52982] = anon_sym_GT;
	v->a[52983] = anon_sym_GT_GT;
	v->a[52984] = anon_sym_LT_AMP;
	v->a[52985] = anon_sym_GT_AMP;
	v->a[52986] = anon_sym_GT_PIPE;
	v->a[52987] = anon_sym_LT_GT;
	v->a[52988] = anon_sym_LT_LT;
	v->a[52989] = anon_sym_LT_LT_DASH;
	v->a[52990] = aux_sym_concatenation_token1;
	v->a[52991] = anon_sym_BQUOTE;
	v->a[52992] = anon_sym_SEMI;
	v->a[52993] = 3;
	v->a[52994] = actions(3);
	v->a[52995] = 1;
	v->a[52996] = sym_comment;
	v->a[52997] = actions(539);
	v->a[52998] = 5;
	v->a[52999] = sym_file_descriptor;
	small_parse_table_2650(v);
}

/* EOF small_parse_table_529.c */
